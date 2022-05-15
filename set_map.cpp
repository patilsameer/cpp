#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    set<int> myset;
    set<int>::iterator itr; // as memory allocated to collections is not sequential, we need special pointers.
                            // these special pointers are called iterators;

    myset.insert(1);    // insert 1 in set
    myset.insert(2);    
    myset.insert(3);
    myset.insert(3);    // insert will not work as 3 is already present, set do not keep duplicate values
    itr=myset.find(3);  // search for 3 in set
    cout<<(*itr)<<endl; // print if 3 is found 
    
    //printing entire set
    for(itr=myset.begin();itr!=myset.end();itr++)
        cout<<(*itr)<<endl;
    myset.erase(2);     // remove 2 from set

    map<int,string> mymap;
     map<int,string>::iterator itr1;
   // mymap.insert({1,"INDIA"}); //inserting value in mymap; 1 is key and INDIA is value
   // mymap.insert({2,"KOLHAPUR"}); this code works with g++ of gcc
    
    pair<int,string> p;// this insert style is required with clang compiler
    p.first=1;
    p.second="INDIA";
    mymap.insert(p);
    p.first=2;
    p.second="MAHARASHTRA";
    mymap.insert(p);

    //printing the entire map
    for(itr1=mymap.begin();itr1!=mymap.end();itr1++)
        cout<<(*itr1).first<<" "<<(*itr1).second<<endl;


    itr1=mymap.find(1);//search for key 1 is present of not
    cout<<(*itr1).second<<endl;// printing the associated value with key

    string value="INDIA"; // searching for the value directly in map, works in g++, linux, windows, in MAC you
                          // need to update the flag of compiler 

    /*
        original configuration in MAC
        
        ------------------------------------------------------------------
        CC=clang++
        CFLAG=$( -stdlib=libc++ -std=c++11 -g -Wall -werror -Wextra -I.)
        
        all: main

        main: main.o
            $(CC) $(CFLAGS) -o main *.o

        main.o: main.cpp
            $(CC) $(CFLAGS) -c main.cpp
        -------------------------------------------------------------------

 
        ------------------------------------------------------------------
        CC=clang++
        CFLAGS=-stdlib=libc++ -std=c++11 -g -Wall -Werror -Wextra -I.

        all: main

        main: main.o
            $(CC) $(CFLAGS) -o main *.o

        main.o: main.cpp
            $(CC) $(CFLAGS) -c main.cpp

    */
    itr1=find_if(mymap.begin(),mymap.end(),[&value] (const std::pair<int,string> &p){
        return value==p.second;
    });
    cout<<(*itr1).first<<endl;
}