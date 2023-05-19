#include<iostream>
using namespace std;

class Number{

    public:
        int n1;
        operator int(){
            return n1;
        }

        Number(int val):n1(val){}
        Number(){};
};

int main(){
    Number objn1;
    objn1.n1=1;
    int k=objn1;
    k=22;
    //bjn1=k;
    Number objn2=k;
}