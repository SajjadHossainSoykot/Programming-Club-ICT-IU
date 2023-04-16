#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=1;
    cin>>n;
    int a[n];
    cin>>a[0];
    if(n>1)
    {
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        if (a[i-1]!=a[i])
        {
            count++;
        }
    }
    }
    cout<<count<<endl;
}