#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="i, love competitive programming. i also love algorithm";
    char* tmp=strtok(str," ,.");
    while(tmp!=NULL){
        cout<<tmp<<endl;
        tmp=strtok(NULL," ,.");
    }
    return 0;
}

/**
Output:
-------

i
love
competitive
programming
i
also
love
algorithm

**/
