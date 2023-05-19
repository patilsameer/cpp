#include<iostream>
#include<sstream>
using namespace std;


class Demo{

    private:
        int id;
        string name;
    public:
        
 

        Demo(int i=0):id(i){
            this->id=i;
            cout<<"argument constructor"<<endl;

        }

        stringstream toString(){
            stringstream ss;
            ss<<"id = "<<id;
            ss<<" name = "<<name;
            return ss;
        }
};

int main(){

    Demo d1;
    Demo d2(2);
    cout<<d1.toString().str();
    cout<<d2.toString().str();

}