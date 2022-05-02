#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.insert(v.begin(),0); // will insert 0 at the begining of vector shift all member by 1 place
    v.insert(v.begin(),11);// will insert 11 at the begining and 0 will be shifted to 2nd place and so on
    v.erase(v.begin()+1); // will erase 2nd element from vector -- in this case its 0
    cout<<v.back()<<endl; // display top / last element in vector
    v.pop_back();         // remove top / last element from vector
    cout<<v.back()<<endl;;
    v.pop_back();
    cout<<v.back()<<endl;
    v.pop_back();
    cout<<v.back()<<endl;

}