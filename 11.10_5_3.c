#include<stdio.h>
int main()
{
	int i=0,q=0;
	char a[100]={0},b[100]={0};
	int m=0;
	do{
		scanf("%c",&a[m]);
		m++;
	}while(a[m-1]!='\n');
	
	for(;q<m;){
		for(;q<m;q++){
			if((a[q]>='a'&&a[q]<='z')||(a[q]>='A'&&a[q]<='Z')){
				b[i]=a[q];
				i++; 
			}else{
				break;
			}
			
		}
		q++;
		while(i>0){
			printf("%c",b[i-1]);
			i--;
		}
		printf("%c",a[q-1]);
	}
	return 0;
}
