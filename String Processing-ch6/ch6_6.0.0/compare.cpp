#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1("green apple");
    string str2("red apple");

    if(str1.compare(str2)!=0)
        cout<<str1<<" is not "<<str2<<endl;
    if(str1.compare(6,5,"apple")==0)
        cout<<"green and red both are apple"<<endl;
    if(str1.compare(6,5,str2,4,5)==0)
        cout<<"both is apple"<<endl;

    return 0;
}

/**
Output:
-------

green apple is not red apple
green and red both are apple
both is apple

**/
