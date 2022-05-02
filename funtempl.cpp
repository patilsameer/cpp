#include<iostream>
using namespace std;

template <class T>
T add(T n1, T n2){
    return n1+n2;
}


int main(){

    cout<<"addtion of 1 & 2 is ="<<add(1,2)<<"return value size of int = "<<sizeof(add(1,2))<<endl;
    cout<<"addition of 1.1 & 2.2 is ="<<add(1.1,2.2)<<" "<<sizeof(add(1.1,2.2))<<endl;
    cout<<"addition of 4.4 & -3.2 is="<<add(4.4,-3.2)<<endl;
}