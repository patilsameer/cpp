#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("file1.cpp");
    fout.open("temp.txt");
    string line;
    while(fin){
        getline(fin,line);
        fout<<line<<endl;
        cout<<line<<endl;
    }
    fin.close();
    fout.close();

}