#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
    string str;
    int a;

    while(getline(cin,str)){

        if(str.size()==0)break;
        stringstream ss(str);

        while(ss>>a) {
                v.push_back(a);
        }

        for( int i=0; i<v.size(); i++ ){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();

    }
    return 0;
}
/**
Output:

1 2 3 4 8 5 9
1 2 3 4 8 5 9
4 2 6
4 2 6
2 2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2 2


**/
