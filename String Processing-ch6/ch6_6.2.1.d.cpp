/**
Following program, we can check whether a string starts with 7 dots or not.
If the string starts with 7 dots, we will break the program.
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str.compare(0,7,".......")==0){
        cout<<"The string contains 7 dots in the beginning"<<endl;
    }else{
        cout<<"The string doest not contain 7 dots in the beginning"<<endl;
    }

    return 0;
}
/**

Input=  .......prime number
Output= The string contains 7 dots in the beginning

Input=
Output=

**/
