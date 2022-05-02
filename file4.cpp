#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fileobj;
    string data;
    fileobj.open("mydata.txt", ios::app);
    fileobj.write("\nnew data in file",16);
    cout<<"data written to file"<<endl;
    fileobj.close();
}