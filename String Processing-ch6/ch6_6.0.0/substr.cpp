#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="Practice makes a man perfect";
    string s0=str.substr(17,3);   // substr() assign "man" to s0 variable
    size_t pos=str.find("man");   // size_t is unsigned integer
    string s2=str.substr(pos);    // substr() assign pos-end word to s2 variable
    cout<<"s0 : "<<s0<<endl;
    cout<<"pos : "<<pos<<endl;
    cout<<"s2 : "<<s2<<endl;
    return 0;
}

/**

Output:
-------

s0 : man
pos : 17
s2 : man perfect

**/
