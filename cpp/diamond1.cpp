#include<iostream>
using namespace std;

class Ornament{
    private:
        int id;
    public:
        
        void display(){
            cout<<"this is ornament"<<endl;
        }
};
class Diamond:virtual public Ornament{};
class Gold:virtual public Ornament{};

class Ring:public Diamond,public Gold{};
int main(){
     Ring obj;
     obj.display();
     obj.Gold::display();
}