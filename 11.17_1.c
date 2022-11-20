#include<stdio.h>
int main()
{
	int m,n,i,k=0,l=0,min;
	scanf("%d %d",&m,&n);
	int p[m],q[n],a[m+n];
	
	for(i=0;i<m;i++){
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&q[i]);
	}
	
	for(i=0;i<m;i++){
		a[i]=p[i];
	}
	
	for(i=0;i<n;i++){
		a[m+i]=q[i];
	}
	
	for(i=0;i<m+n;i++){
		min=a[i];
		for(k=i;k<m+n;k++){
			if(a[k]<min){
				min=a[k];
			}
		}
		for(k=i;k<m+n;k++){
			if(a[k]==min){
				a[k]=a[i];
				break;
			}
		}
		a[i]=min;
	}
	
	for(i=0;i<m+n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
