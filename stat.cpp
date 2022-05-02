#include<iostream>
using namespace std;

class A{
    public:
        static int k;
        int id;
        A(){
            id=k;
            k++;
        }
        static void data();
        static void data1(){
            cout<<"this is data1 a static member function of class"<<endl;
        }
        void show(){
            cout<<"this is non-static funciton of class A"<<endl;
        }
};
void A::data(){
    cout<<"this is static function of class A"<<endl;
}
int A::k=1;
 
int main(){
    A obj1,obj2;
    cout<<"obj1.id="<<obj1.id<<" obj1.k="<<obj1.k<<endl;
    cout<<"obj2.id="<<obj2.id<<" obj2.k="<<obj2.k<<endl;
    obj1.data();
    A::data();
    //A::show();//this will trigger error
    obj1.show();
    A::data1();
}