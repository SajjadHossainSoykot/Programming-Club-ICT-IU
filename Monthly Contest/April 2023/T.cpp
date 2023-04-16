#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)==1){
	int a[n];
	for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count=0;
        for(int i=1; i<n; i++){
        for (int j = 0; j<n-1; j++){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
                count++;
            }
        } 
    }
    cout<<"Minimum exchange operations : "<<count<<endl;
	}
}