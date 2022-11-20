#include<stdio.h>
int main()
{
	int a[10],s[50],sum=0,n,i,k=0,min;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	for(i=0;i<10;i++){
		if(a[i]!=0){
			for(;a[i]>0;a[i]--){
				s[k]=i;
				k++;
			}
		}
		
	}
	
	for(i=0;i<sum;i++){
		if(s[i]!=0){
			min=s[i];
			s[i]=s[0];
			s[0]=min; 
			break;
		}
	}
	
	for(i=0;i<sum;i++){
		printf("%d",s[i]);
	} 
	
	return 0;
}
