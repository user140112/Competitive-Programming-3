#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="i, love competitive programming. i also love algorithm";
    char* p;
    vector<string> tokens;
    map<string, int> freq;
    for (p = strtok(str, " ,."); p; p = strtok(NULL, " ,.")) {
    tokens.push_back(p);
    freq[p]++;
    }
    string res;
    int mx=0;
    map<string,int>:: iterator it;

    for( it=freq.begin();it!=freq.end(); it++ ){
        if(it->second>mx){
            res=it->first;
            mx=it->second;
        }
    }
    cout<<res<<endl;
    freq.clear();
    return 0;
}
/**
Output:
------
i

Note: Here, "i" or "love" both is valid output.
**/
