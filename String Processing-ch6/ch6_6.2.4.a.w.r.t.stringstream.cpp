#include<bits/stdc++.h>
using namespace std;

vector<string> tokens;

int main()
{
    string str="i love competitive programming";
    stringstream ss(str);
    string tmp;
    while(getline(ss,tmp,' ')){
        tokens.push_back(tmp);
    }
    for( int i=0; i<tokens.size(); i++ )
        cout<<tokens[i]<<endl;

    return 0;
}
/**

Output:
-------
i
love
competitive
programming

**/
