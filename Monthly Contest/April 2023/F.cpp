#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, i;
        cin>>n;
        for (i = n; i >0; i--)
        {
            if(i==n || i==2 || i==1)
            {
                for (int j = i; j>=2; j--)
                {
                    cout<<"* ";
                }
                cout<<"*"<<endl;
                
            }
            else
            {
                cout<<"* ";
                for (int j = 0; j<i-2; j++)
                {
                    cout<<"  ";
                }
                cout<<"*"<<endl;
            }

        }
        cout<<endl;        
    }
    
}