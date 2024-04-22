#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> myset;
    myset.insert(1);
    myset.insert(3);
    myset.insert(2);
    set<int>::iterator itr;
    
    for(itr=myset.begin();itr!=myset.end();itr++)
        cout<<(*itr)<<endl;
}