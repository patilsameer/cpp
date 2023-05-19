#include<iostream>
using namespace std;

class Person{
    private:
        Person(){

        }
    public:
        static Person *p;
       static Person singleObject(){
           if(p==NULL){
                 p=new Person();
           }
           
            return *p;
       }
       static void display(){
        cout<<"THS IS A STATIC FUNCITON IN PERSON"<<endl;
       }
};

Person Person::*p=NULL;
int main(){
   Person p1=Person::singleObject();
   Person::display();
}