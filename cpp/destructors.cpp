#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(){
            cout<<"This is constructor"<<endl;
        }

        ~Demo(){
            cout<<"This is destructor"<<endl;
        }

};
int main(){
    Demo d;
    Demo *d1=new Demo();
    delete(d1);
}