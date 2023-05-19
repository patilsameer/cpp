#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Student{
    public:
        int id;
        string name;
};

int main(){
    Student s;
    s.id=1;
    s.name="KITkolahpur_";

    fstream ofst("record.dat", ios::binary | ios::out);

    ofst.write(reinterpret_cast<char*>(&s),sizeof(Student));

    s.id=2;
    s.name="KIT";
    ofst.write(reinterpret_cast<char*>(&s),sizeof(Student));

    s.id=3;
    s.name="KITcsekolhapur";
    ofst.write(reinterpret_cast<char*>(&s),sizeof(Student));

    

    ofst.close();

    Student s1;

    fstream ifst("record.dat", ios::binary | ios::in);
    ifst.seekg(1*sizeof(Student));
    ifst.read(reinterpret_cast<char*>(&s1),sizeof(Student));

    cout<<s1.id<<endl;
    cout<<s1.name<<endl;

}