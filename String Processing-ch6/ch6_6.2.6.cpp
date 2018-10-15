#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int alphas=0;
    while(scanf("%c",&ch),ch!='\n'){
        alphas += isalpha(ch) ? 1 : 0;;
    }
    cout<<alphas<<endl;
    return 0;
}
