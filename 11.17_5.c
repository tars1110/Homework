#include<stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
		while(a[i]%2==0){
			a[i] /= 2;
		}
		while(a[i]%3==0){
			a[i] /= 3;
		}
		while(a[i]%5==0){
			a[i] /= 5;
	   	}
		
		if(a[i]!=1){
			printf("false\n");
		}else{
			printf("true\n");
		}
	} 
	
	return 0;
 } 

