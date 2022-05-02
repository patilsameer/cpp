#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    string line;
    fin.open("First.cpp");
    while(fin){
        getline(fin,line);
        cout<<line<<endl;
    }
}