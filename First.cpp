//#include<iostream>
#include<iostream>
using namespace std;
class Apple{
    
    private:
  
       
    int id;
    public:
      Apple(int id){
                this->id=id;
        }
         Apple(){
            cout<<"This is Default Constructor"<<endl;
            //printf("This is Default Constructor\n");
        }
        
        ~Apple(){
            cout<<"This is Destructor"<<endl;
        }
        
        void setId(int val){
                id=val;
        }

        void getId(){
            cout<<"This is getId() & the id of the Apple is="<<id<<endl;
                
        }
       
   
};

int main(){
    Apple myPc1(1);
    Apple myPc2(2);
    Apple *myPc3;

    int j=1;
    int k=2;
    cout<<"this is basic example of cout * value of j="<<j<<endl<<endl<<" & the value of k="<<k<<endl;
    myPc3=new Apple();

    //myPc1.setId(1);
    //myPc2.setId(2);
    myPc3->setId(3);

    myPc1.getId();
    myPc2.getId();
    myPc3->getId();

   // cout<<"I am in main method & this is myPc1 & Id="<<myPc1.id<<endl;

    delete(myPc3);
    return 0;
}