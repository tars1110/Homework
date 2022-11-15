#include<stdio.h>
int main(void)
{
	int i=0,a,num,max=0,min=100,b,o=0,m=0;
	char word[100]={0};
	int cha[26]={0};
	
	/*do{
		scanf("%c",&word[m]);
		m++;
	}while(word[m-1]!='\n');
	*/
	
	scanf("%s",word);
	while(word[i]>='a'&&word[i]<='z'){
		num = (int)(word[i]-'a');
		cha[num]++; 
		i++;
	}
	for(i=0;i<26;i++){
		if(cha[i]>max){
			max=cha[i];
		}
		if(cha[i]<min&&cha[i]>0){
			min=cha[i];
		}
	}
	b=max-min;
	if(b==0||b==1){
		printf("No Answer\n");
		printf("0");
	}else{
		for(i=2;i<b;i++){
			if(b%i==0){
				printf("No answer\n");
				printf("0");
				o=1;
				break;
			}
			
		}if(o==0){
			printf("Lucky Word\n");
			printf("%d",b);
		}
	}
	
	 
	return 0;
 } 
