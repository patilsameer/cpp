#include<iostream>
using namespace std;

class Demo{
    private:
        int id;
        friend void display(Demo d);
    public:
        void setId(int id){
            this->id=id;
        }
        int getId(){
            return id;
        }
        friend class DemoFriend;
        //
};

void display(Demo d){
    cout<<d.id<<endl;
}

int main(){
    Demo d;
    d.setId(11);
    display(d); 


}