#include<iostream>
using namespace std;
class Number{
    public:
        int number;
       void * operator new(size_t size){
            return ::operator new(size);

       }

       void operator delete(void *p){
        free(p);
       }
};

int main(){
    Number *n1=new Number();
    delete n1;
}