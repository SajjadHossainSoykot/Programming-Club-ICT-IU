#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    char op[1];
    cin>>x>>op>>y;
    if (op[0]=='+')
    {
       cout<<x+y<<endl;
    }
    else if (op[0]=='-')
    {
       cout<<x-y<<endl;
    }
}    