#include<stdio.h>
int main()
{
	int i;
	float y,z;
	for(i=0; i<1000; i++){
	int m,n;
	scanf("%d%d", &m, &n);
	if(m==0 && n==0)
	return 0;
	z=m/2.0;
	y=z/2.0;
	printf("%.4f\n",(m+n)-y);
	}1
	return 0;
}
