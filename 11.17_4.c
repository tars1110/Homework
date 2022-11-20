#include<stdio.h>
int main()
{
	int n,i,na=0,j=0,k=0,sum=0;
	float ave,s=0.0;
	char a[401]="\0",c[100];
	scanf("%d",&n);
	int b[100]={0};
	
	if(n==0){
		
	}else{
	do{
		scanf("%c",&c[j]);
		j++;
	}while(c[j-1]!='\n');
		
	do{
		scanf("%c",&a[i]);
		i++;
	}while(a[i-1]!='\n');
	
	for(i=0;a[i]!='\n';i++){
		if((a[i]>='0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9')){
			b[k]=b[k]*10+((int)(a[i]-'0'))*10;
		}else if((a[i]>='0'&&a[i]<='9')&&(a[i+1]<='0'||a[i+1]>='9')){
			b[k]=b[k]+(int)(a[i]-'0');
		}else if(a[i]==' '){
			k++;
		}else if(a[i]=='/'){
			na++;
			k--;
		}else if(a[i]=='-'){
			i++;
			for(i;a[i]!=' ';i++){
				b[k]=b[k]*10-(int)(a[i]-'0');
			}
			k++;
		}
	}
	for(i=0;i<=k;i++){
		sum+=b[i];
	}
	s=(k+1)*1.0;
	ave=sum/s;
	if(na==n){
		printf("n/a");
	}else{
		printf("%.2f",ave);
	}
}
	return 0;
}


