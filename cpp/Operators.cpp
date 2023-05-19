#include<iostream>
using namespace std;

class Count{

    public:
        int cnt;
        void operator ++(){
            this->cnt++;
        }

         void operator ++(int){
            this->cnt++;
        }
        Count operator+(Count c){
            Count temp;
            temp.cnt=this->cnt+c.cnt;
            return temp;
        }

        
};

int main(){
    Count c1;
    Count c2;
    c1.cnt=1;
    c2.cnt=2;
    Count c3=c1+c2;
    cout<<c3.cnt<<endl;
    c3++;
    cout<<c3.cnt<<endl;
    ++c3;
    cout<<c3.cnt<<endl;
}