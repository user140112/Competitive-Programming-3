#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000]="My roll number is 140112 in CSE";
    char str[1000];
    int len=strlen(s);
    int digit=0,vowel=0,consonant=0;
    for( int i=0; i<len; i++ )
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        if(isdigit(s[i])) digit++;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') vowel++;
        else consonant++;

    }
    printf("%s\n",s);
    printf("digit : %d\n",digit);
    printf("vowel : %d\n",vowel);
    printf("consonant : %d\n",consonant);
    return 0;
}
/**
Output:
-------
my roll number is 140112 in cse
digit : 6
vowel : 6
consonant : 25

**/
