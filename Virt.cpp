#include<iostream>
using namespace std;

class A{
    public:
        /*virtual ~A(){
            cout<<"object destroyed"<<endl;
        }*/
        ~A(){
            cout<<"Normal destructor of class B"<<endl;
        }
        virtual void data(){
            cout<<"this is data of A"<<endl;
        }
        virtual void show()=0;
};

class B : public A{
    public:
        void data(){
            cout<<"this is data of B"<<endl;
        }
        void show(){
            cout<<"this is pure virtual funciton implementd in B"<<endl;
        }
        ~B(){
            cout<<"B object Destroyed"<<endl;
        }
};

int main(){
 //   A *aobj;
    B obj;
    obj.data();
    obj.show();
   // aobj=&obj;
    //aobj->data();
    //aobj->show();
}