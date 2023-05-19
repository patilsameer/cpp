#include<iostream>
using namespace std;

class A{
    public:
         A(int s){
            cout<<"this is A"<<endl;
        }

};
class B{
    public:
       B(int i){
            cout<<"this is B"<<endl;
        }

};
class C:public A, public B{
    public:
        C():A(1),B(1){
            cout<<"this is C"<<endl;
        }
};

int main(){
    C obj;
   
}

