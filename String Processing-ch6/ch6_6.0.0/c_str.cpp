#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="This is a new book";

    char* cstr= new char[s.size()+1];
    strcpy(cstr,s.c_str());
    char* p=strtok(cstr," ");
    while(p!=0){
        printf("%s\n",p);
        p=strtok(NULL," ");
    }
    delete[] cstr;
    return 0;
}

/**
Output:
-------

This
is
a
new
book

**/
