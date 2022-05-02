#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream frw;
    string line;
    frw.open("mydata.txt",ios::ate | ios::in | ios::out);
    frw.write("\n12345",6);
    frw<<"\n"<<"this is extraction operation"<<endl;
    frw.seekg(0,ios::beg);
    while(frw){
        getline(frw,line);
        cout<<line<<endl;
    }   
    frw.close();
}