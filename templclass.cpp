#include<iostream>
using namespace std;

template<class mytype>
class Stack{
    public:
        mytype stack[10];
        int top=-1;

        void push(mytype data)
        {
            top++;
            stack[top]=data;
        }

        mytype pop(){            
             
            return stack[top--];
            //top--;
            //return mytype;
        }

};

int main()
{
    Stack<int> istack;
    istack.push(1);
    istack.push(2);
    istack.push(32);

    cout<<istack.pop()<<endl;
    cout<<istack.pop()<<endl;
    cout<<istack.pop()<<endl;

    Stack<float> fstack;
    fstack.push(1.1F);
    fstack.push(1.2F);
    cout<<fstack.pop()<<endl;
    cout<<fstack.pop()<<endl;
}