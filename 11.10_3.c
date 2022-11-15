#include<stdio.h>
int main()
{
	int a,n,k=0,i,l=1,m;
	scanf("%d %d",&a,&n);
	m=n;
	for(i=0;i<n;i++){
		k += a*m*l;
		l*=10;
		m--;
	}
	printf("%d",k);
	return 0;
}
