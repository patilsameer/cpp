#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string input;
    ofstream fout;
    fout.open("mydata.txt");
    getline(cin,input);
    while(input!="-1"){
        fout<<input<<endl;
        getline(cin,input);
    }
    fout.close();
}