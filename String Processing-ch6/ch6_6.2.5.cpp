#include<bits/stdc++.h>
using namespace std;

map<string,int> mp;

int main()
{
    char str[]="i, love competitive programming. i also love algorithm";
    char* tmp=strtok(str," ,.");
    while(tmp!=NULL){
        mp[tmp]++;
        tmp=strtok(NULL," ,.");
    }
    string res;
    int mx=0;
    map<string,int>:: iterator it;

    for( it=mp.begin();it!=mp.end(); it++){
        if(it->second>mx){
            res=it->first;
            mx=it->second;
        }
    }
    cout<<res<<endl;
    mp.clear();
    return 0;
}
/**
Output:
------
i

Note: Here, "i" or "love" both is valid output.
**/
