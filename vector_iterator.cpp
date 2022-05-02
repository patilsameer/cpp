#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int *ptr;
    vector<int>::iterator itr;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    itr=find(v.begin(),v.end(),2);
    cout<<*itr<<endl;
    cout<<++*itr<<endl;
}