#include<bits/stdc++.h>
using namespace std; 
int main() {
    string s;
    cin>>s;
    int l = s.length();
    int L=0, U=0;
    for(int i = 1; i < l; i++)
    {
        if(islower(s[i]))
        {
            L++;
        }
    }
    for(int i = 0; i < l; i++)
    {
        if(isupper(s[i]))
        {
            U++;
        }
    }
    if(islower(s[0]) && L==0)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s;
        return 0;
    }
    if(U==l)
    {
        for(int i=0; i<l; i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else
    {
        cout<<s;
    }    
    return 0;
}