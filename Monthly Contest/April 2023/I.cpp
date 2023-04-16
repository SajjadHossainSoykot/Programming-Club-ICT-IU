#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int A[3], B[3];
        cin>>A[0]>>A[1]>>A[2];
        cin>>B[0]>>B[1]>>B[2];
        int a=0, b=0;
        for (int i = 0; i <3; i++)
        {
            if(A[i]>B[i])a++;
            else b++;
        }
        if(a>b)cout<<"A\n";
        else cout<<"B\n";
    }
}