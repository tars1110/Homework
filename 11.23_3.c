#include<stdio.h>
int main()
{
	int i,n,j;
	int a[5];
	int positive,zero,negative;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		positive=0;
		zero = 0;
		negative=0;
		for(j=0;j<5;j++){
			scanf("%d",&a[j]);
			if(a[j]>0){
				positive++;
			}else if(a[j]==0){
				zero++;
			}else if(a[j]<0){
				negative++;
			}
		}
		printf("%d %d %d\n",positive,negative,zero);
		
	}
	
	
	return 0;
}
