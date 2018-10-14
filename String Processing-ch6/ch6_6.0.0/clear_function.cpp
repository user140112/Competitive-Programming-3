#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    char c;

    do{
       c=cin.get();
       if(c!='.') str+=c;
    }while(c!='.');

    cout<<"String before clear: "<<str<<endl;
    str.clear();
    cout<<"String after clear: "<<str<<endl;
    return 0;
}

/**

Input:
------
String manipulation.

Output:
-------
String before clear: String manipulation
String after clear:

**/
