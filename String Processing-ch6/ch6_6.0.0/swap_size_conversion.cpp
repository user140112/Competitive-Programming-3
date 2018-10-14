#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="Competitive";
    string s2="Programming";

    int s1len=s1.size();
    int s2len=s2.length();
    cout<<"s1 = "<<s1len<<endl;
    cout<<"s2 = "<<s2len<<endl;

    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<"\""<<"Competitive"<<"\""<<" in uppercase : "<<s1<<endl;
    cout<<"\""<<"Programming"<<"\""<<" in lowercase : "<<s2<<endl;

    swap(s1,s2);
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;

    return 0;
}

/**

Output:
-------
s1 = 11
s2 = 11
"Competitive" in uppercase : COMPETITIVE
"Programming" in lowercase : programming
s1 = programming
s2 = COMPETITIVE

**/
