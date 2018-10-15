#include<bits/stdc++.h>
using namespace std;

vector<string> tokens;

int main()
{
    char str[]="i, love competitive programming. i also love algorithm";
    char* tmp=strtok(str," ,.");
    while(tmp!=NULL){
        tokens.push_back(tmp);
        tmp=strtok(NULL," ,.");
    }
    sort(tokens.begin(),tokens.end());
    cout<<"Tokens as a lexicographically order : "<<endl<<endl;
    for( int i=0; i<tokens.size(); i++ ){
        cout<<tokens[i]<<endl;
    }
    return 0;
}
/**

Output:
-------
Tokens as a lexicographically order :

algorithm
also
competitive
i
i
love
love
programming

**/
