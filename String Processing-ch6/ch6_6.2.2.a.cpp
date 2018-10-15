#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="Codeforces is popular online judge";
    string s2="online";
    string s3="topcoder";
    int pos1=s1.find(s2);
    cout<<"\""<<"online"<<"\""<<" is founded at : "<<pos1<<endl;
    int pos2=s1.find(s3);
    cout<<"\""<<"topcoder"<<"\""<<" is founded at : "<<pos2<<endl;
    return 0;
}
/**
Output:
-------

"online" is founded at : 22
"topcoder" is founded at : -1

**/
