#include<iostream>
#include<exception>
using namespace std;

class myexcep:public exception{
    public:
     virtual const char* what()throw exception(){
        return "got a problem";
    } 
};


int main(){
    //int i;
    try{
        throw myexcep();
    }
    catch(exception& e){
        e.what();
        cout<<"problem occcured"<<endl;
    }
}