#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	
	int num[n],st[n],nd[n],rd[n];
	float ave[n];
	float high = 0;
	
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&num[i],&st[i],&nd[i],&rd[i]);
		ave[i] = (st[i] + nd[i] + rd[i]) / 3.0;
		if(ave[i] > high){
			high = ave[i];
		}
	}
	//输出平均分数 
	for(i=0;i<n;i++){
		printf("%.2f\n",ave[i]);
	}
	//输出最高分学号 成绩 
	/*for(i=0;i<n;i++){
		if(ave[i] >=high){
			printf("%d %.2f\n",num[i],high);
		}
	} */
	return 0;
 } 
