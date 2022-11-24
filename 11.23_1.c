#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,key=0,m,max=(int)pow(2,31)-1;
	long long n,fn=0;
	int a[10]; 
	scanf("%d",&n);
	
	for(;n<=max;){
		k=n;
		fn=0;
		for(i=0;k>0;i++){
			a[i]=k%10;
			k=k/10;
		}
		m=i-1;
		for(i=0;i<=m;i++){
			fn=fn*10+a[i];
		}
		//printf("%d\n",fn);
		if(fn==n){
			printf("%d\n",n);
			key=1;
			break;
		}else{
			n=n+fn;
		}
	}
	if(key==0){
		printf("No\n");
	}
	
	return 0;
}
