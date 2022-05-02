#include<iostream>
using namespace std;

class B;
class C;

class A{
    private:
        int key=1;
    friend void data(A,B);
};
class B{
    private:    
        int key=2;
        friend void data(A,B);
        friend C;
};

void data(A o1,B o2){
    cout<<o1.key+o2.key<<endl;
}

class C : public B{
    public: 
        void data(){
            cout<<"accessing private key of class b in class c "<<key<<endl;
        }
};

int main(){
    A obj;
    B bobj;
    data(obj,bobj);
    C objc;
    objc.data();
}