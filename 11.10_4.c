#include<stdio.h>
int main()
{
	int a,i,n,m,k,l=0,f=0;
	scanf("%d",&n);
	int num[n],cha[999];
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		m=num[i];
		while(m>0){
			m=m/10;
			l++;
		}
		m=num[i];
		for(k=0;k<l;k++){
			cha[k]=m%10;
			m=m/10;
		}
		for(k=0;k<l;k++){
			f=f*10+cha[k];
		}
		
		if(f==num[i]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
		f=0;
		l=0;
	}
	
	return 0;
}
