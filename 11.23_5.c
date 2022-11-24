#include<stdio.h>
int main()
{
	int i=0,m=0,j=0,k=0,c=0,q=0;
	int n;
	char a[100]="\0",b[100][100];
	scanf("%d",&n);
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			b[i][j]='0';
		}
	}
	
	while((c=getchar())!='\n'&&c!=EOF);
	
	scanf("%[^\n]",a); 
	
	for(i=0;i<100;i++){
		if(a[i]!='\0'){
			q++;
		}
	}
	
	for(j=0;j<q;j++){
		if(a[j]!=' '){
			b[m][k]=a[j];
			m++;
		}else{
			k++;
			m=0;
		}
	}
	
	for(i=k+1;i<2*k+1;i++){
		for(m=0;m<100;m++){
			b[m][i]=b[m][i-k-1];
		}	
	}
	
	if(n>k+1){
		printf("error\n");
	}else{
		for(i=k+1-n;i<2*k+2-n;i++){
			for(j=0;b[j][i]!='0';j++){
				printf("%c",b[j][i]);
			}
			printf(" ");
		} 
	}
	
	return 0;
 } 
