#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="I love cs3233 competitive programming. i also love algorithm";
    string str2="love";
    int pos=str1.find(str2);
    cout<<"{ ";
    while(pos!=string::npos){
        cout<<pos<<" ";
        pos=str1.find(str2,pos+1);
    }
    cout<<"}"<<endl;
    return 0;
}

/**
Output:
------

{ 2 46 }

**/
