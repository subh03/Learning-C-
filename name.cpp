#include <iostream>
using namespace std;

int main()
{
    string name;

    cout<<"May i know your name?";
    cin>>name;
    getline(cin,name);
    //getline takes input of all the words till you press enter unlike normally where 
    //only the first word will be taken as input 
    cout<<"Welcome "<<name;
    return 0;
}