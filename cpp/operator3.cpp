#include<iostream>

using namespace std;

class Cnt{

    private:
        int cnt;
    public:
        Cnt(){
            cnt=1;
        }

        Cnt(int val){
            cnt=val;
        }
        void operator ++(){
            this->cnt++;
        }

        void operator ++(int){
            this->cnt++;
        }

        

        friend  ostream & operator <<(ostream &out,Cnt &obj);
           
        friend Cnt operator +(Cnt &o1,Cnt &o2);
        friend Cnt operator +(Cnt &o1,int i);

};


Cnt operator+(Cnt &o1,int i){
    Cnt temp;
    temp.cnt=o1.cnt+i;
    return temp;
}
Cnt operator +(Cnt &o1,Cnt &o2){
        Cnt temp;
        temp.cnt=o1.cnt+o2.cnt;
        return temp;
}
    
ostream & operator <<(ostream &out,Cnt &obj)
    {
        out<<obj.cnt;
        return out;
    }


int main(){
    Cnt cnt;
    Cnt o=1;
    ++cnt;
    cnt++;
    cout<<cnt<<endl;
    Cnt c2=cnt+cnt;
    cout<<c2<<endl;

    Cnt c3= c2 + 10;
    Cnt c4= 10 + c2;
}