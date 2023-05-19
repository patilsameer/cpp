#include<iostream>
#include<string.h>
using namespace std;


class MyClass{
    private:
         int number1,number2;
    public:
       
        string name;
        friend ostream & operator <<(ostream &out, const MyClass &obj);
        friend istream & operator >>(istream &in,MyClass &obj);
        
};

istream & operator >>(istream &in,MyClass &obj){
    cout<<"Enter a Number"<<endl;
    in>>obj.number1;
    cout<<"Enter a Number"<<endl;
    in>>obj.number2;
    cout<<"Enter the name"<<endl;
    in>>obj.name;
    return in;
}
ostream & operator <<(ostream &out,const MyClass &obj){
    out<<obj.number1;
    out<<obj.name;
    out<<obj.number2;
    return out;
}

int main(){
    MyClass obj;
    cin>>obj;
    // obj.number1=1;
    // obj.number2=2;
    // obj.name="+";
    cout<<obj;
}