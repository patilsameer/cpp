#include<iostream>
using namespace std;


void display(int data){
    cout<<data<<endl;
}


int main(){
        
        int arr[5]={1,2,3,4,5};

        for_each(arr,arr+5,display);

}