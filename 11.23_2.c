#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j,k,flag;
	int a,b,c;
	float sq,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		flag=(a+b-c)*(a+c-b)*(b+c-a);
		if(flag>0){
			p=(a+b+c)/2.0;
			sq=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.2f\n",sq);
		}else{
			printf("error\n");
		}
	} 
	
	return 0;
}
