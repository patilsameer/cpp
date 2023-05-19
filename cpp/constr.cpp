#include<iostream>
using namespace std;
class A{
    public:
         A(){
            cout<<"this is A"<<endl;
        }

        ~A(){
            cout<<"destructor"<<endl;
        }
};

int main(){
    A *obj=new A();
    delete obj;
}