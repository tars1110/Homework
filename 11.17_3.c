#include<stdio.h>
int main()
{
	int n,i,k,j,h;
	long long p=1,sum=0;

	scanf("%d",&k);
	int a[k];
	
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		if(a[i]>=25){
			a[i]=24;
		}
		for(j=a[i];j>0;j--){
			for(h=j;h>0;h--){
				p*=h;
				p=p%1000000;
			}
			//printf("%d\n",p);
			sum+=p;
			sum=sum%1000000;
			p=1;
		}
		printf("%d\n",sum);
		sum=0;
	}
	
	return 0;
 }
