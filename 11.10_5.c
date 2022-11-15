#include<stdio.h>
int main()
{
	int i,k,l,m,n,a[20][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(k=0;k<m;k++){
			a[k][0]=1;
			a[k][k]=1;
		} 
		for(k=2;k<m;k++){
			for(l=1;l<k;l++){
				a[k][l]=a[k-1][l]+a[k-1][l-1];
			}
		}
		for(k=0;k<m;k++){
			for(l=0;l<=k;l++){
				printf("%d ",a[k][l]);
			}
			printf("\n");
		}
		
	}
	
	
	return 0;
}
