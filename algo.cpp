#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[6]={1,4,2,3,3,5};
    int pattern[4]={1,2,3,4};
    int *p;
    //*p=;
    int i=0;
    // algorithm to sort the array
    sort(a,a+6); //sort(base address, home many elements) return the pointer, 
    for(i=0;i<6;i++)
        cout<<a[i]<<endl; // printing sorted array
    
    //find element in array & print index

    p=find(a,a+6,9); //find(start address, number of elements, what to find in the array)
    cout<<"*p="<<*p<<endl; // print the element if is found else it will print garbage value set by system. may be 1
    cout<<"index at which element found ="<<p-a<<endl; // will print the index at which the object is found or it will print the last index

    // count the occurrence of specified value in the container/array 

    int cnt=count(a,a+6,3);
    cout<<"3 is found "<<cnt<<" times"<<endl; // print the count of 3

    //search for a pattern in the array & return the start address of pattern
    p=search(a,a+6,pattern,pattern+4);
    for(i=0;i<4;i++)
        cout<<p[i]<<endl;
}