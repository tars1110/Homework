#include<stdio.h>
int main()
{
	int i,j,p,k;
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if((a[i]%2==1)&&(a[i]>0)){
			printf("print\n");
			k=a[i];
			char t[k][k];
			for(j=0;j<k;j++){
				for(p=0;p<k;p++){
					t[j][p]=' ';
				}
			}
			for(j=0;j<(k/2);j++){
				for(p=k/2-j;p<k/2+j+1;p++){
					t[j][p]='*';
				}
			}
			for(j=0;j<k;j++){
				t[k/2][j]='*';
			} 
			for(j=k/2+1;j<k;j++){
				for(p=j-k/2;p<k/2+k-j;p++){
					t[j][p]='*';
				}
			}
			for(j=0;j<k;j++){
				for(p=0;p<k;p++){
					printf("%c",t[j][p]);
				}
				printf("\n");
			}
			
			
		}else{
			printf("error\n");
		}
		
	}
	
	
	return 0;
}
