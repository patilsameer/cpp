#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display(int i){
    cout<<i<<endl;
}

int main(){

    vector<int> v;

    v.push_back(1); //insert value at the top
    v.push_back(2);
    v.push_back(3);

    for_each(v.begin(),v.end(),display);//using foreach for displaying all elements

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    vector<int> v1(arr,arr+10);//creating vector from array

    for_each(v1.begin(),v1.end(),display);
    
   // v.push_front(11);//vector do not support push_front()
}