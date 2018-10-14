#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str1="It is a simple test program and it is a simple string program";
  string str2="is";

  size_t found=str1.find(str2);
  if(found!=string::npos)
    cout<<"First "<<"\""<<str2<<"\""<<" is founded at : "<<found<<endl;

  found=str1.find(str2,found+1);
  if(found!=string::npos)
    cout<<"Second "<<"\""<<str2<<"\""<<" is founded at : "<<found<<endl;

  str1.replace(str1.find(str2),str2.length(),"also");
  cout<<str1<<endl;

  return 0;
}

/**
Output:
------

First "is" is founded at : 3
Second "is" is founded at : 35
It also a simple test program and it is a simple string program

**/
