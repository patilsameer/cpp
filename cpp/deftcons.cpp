#include<iostream>
using namespace std;

class Demo{

    public:
        int *id;
        Demo(){
            id=new int;
            *id=0;
            cout<<"constructor"<<endl;
        }
        Demo(Demo &obj){
            cout<<"Copy Constructor"<<endl;
            // this->id=obj.id;
            this->id = new int;
            *this->id = *obj.id;
        }
        // what(){}
        // what(int i){}
};

int main(){
    //Demo d;
    //Demo d2=d;
    Demo *d=new Demo();
    //Demo *d2=d;

    Demo *d2 = new Demo(d);

    *d2=*d;

    *d2->id=1;
    cout<<*d->id<<endl;
    cout<<*d2->id<<endl;
}