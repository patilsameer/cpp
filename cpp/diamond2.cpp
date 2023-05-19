#include<iostream>
using namespace std;

class Ornament{
    public:
        void display(){
            cout<<"this is ornament"<<endl;
        }
};
class Diamond{};

class Ring:public Diamond, public Ornament{};
int main(){
     Ring obj;
     obj.display();
}