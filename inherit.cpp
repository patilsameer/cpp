#include<iostream>
using namespace std;
class A{
    public:
        int id;
        void data(){
            cout<<"data of A"<<endl;
        }
};

class B{
    public:
        int id;
        void data(){
            cout<<"data of B"<<endl;
        }
};

class C: public A, public B{
    
};

class D{
    public:
        int d;
        void data(){
            cout<<"data of d"<<endl;
        }
};

class E: public D{};

class F: public D{};

class G: public E, public F{};

int main(){
    C obj;
    obj.A::data();
    obj.A::id=1;
    G objg;
    objg.E::d=1;
    objg.E::data();
}