#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long n;
        cin>>n;
        int ans = 0;
        if(n<10)
        {   cout<<0<<endl;
            continue;
        }
        int last = n%10;
        int first;
        while (n>0)
        {
            first = n%10;
            n=n/10;
            
        }
        cout<<abs(first-last)<<endl;
    }
}