#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    char buff[40];
    string msg;
    ifstream fst("myfile.txt");
    while(fst.good()){
        //fst>>msg;
        fst.getline(buff,40);
        cout<<buff<<endl;
    }
    fst.close();
}