#include<iostream>
using namespace std;

double add(double n1, double n2)
{
    return n1 + n2;
}

int main(){
    long long ll;
    
    cout<<add(1,1)<<endl;
    cout<<sizeof(add(1,1))<<endl;
    cout<<sizeof(int)<<endl;
    cout<<"double size ="<<sizeof(double)<<endl;
    cout<<"float size ll ="<<sizeof(long long)<<endl;
}