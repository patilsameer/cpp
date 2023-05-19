#include<iostream>
using namespace std;
class Demo{
    public:
        int number;
    Demo(){}
    Demo(int value){
        number=value;
    }

    operator int(){
        return number;
    }
};


class India{

    public:
        int rupee;

};

class US{
    public:
        int dollar;
        US(India obj):dollar(obj.rupee/80){}

        operator India(){   
                India temp;
                temp.rupee=dollar*80;
                return temp;
        }
};

int main(){
    India india;
    india.rupee=80;
    
    US us=india;
    cout<<us.dollar<<endl;

    India india2=us;
    cout<<india2.rupee<<endl;
}