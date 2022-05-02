#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class First{
    public:
        First(int id,char name[]){
            this->id=id;
            //this->name=name;
            strcpy(this->name,name);
        }

        void getData(){
            cout<<this->id<<endl<<this->name<<endl;
        }
    private:
        int id;
        char name[10];
};

int main(){
    char name[10];
    int id;
    string s1,s2,s3;
    cout<<"Enter id & name for object creation"<<endl;
    cin>>id>>name;
    First f(id,name);
    f.getData();
    cout<<"type one word"<<endl;
    cin>>s1;
    cout<<"you typed"<<s1<<endl;
    cout<<"Type your full name"<<endl;
    getline(cin,s2,'$');
    cout<<"Your full name is = "<<s2<<endl;
    cout<<"Type you full address (you can use multiple lines"<<endl;
    getline(cin,s3,'$');
    cout<<"your full address is = "<<s3<<endl;
}