#include<stdio.h>

void main()

{

char string1[200]; //���ڴ��������ַ���

char string2[200]; //���ڴ�ŵ������ַ���

int invertion(char *ch1, char *ch2); //��������


gets(string1); //���ﲻҪ��scanf,��Ϊscanf�����հ׷��ͻ����



invertion(string1, string2);



getchar();
printf("%s",string2);
}

int invertion(char *ch1, char *ch2)/*char1 ����ʵ�δ�������ԭ�ַ���ָ�� char2 ���յ��������ַ�������������*/

{

int count = 1,num=0;

char *ch=ch1;

for(;*ch1!='\0';ch1++)// ͳ�Ƶ��ʸ���

{

	if(*ch1==' ')
	
	count++; //���������ڿո�����1��ǰ���count��ʼ��Ϊ1�������ԭ��
	
	if(*ch1==' '&&*(ch1+1)==' ') //��ֹ����֮����2���ո�����������һ��������
	
	count--;

}

//printf("count = %d\n", count);

ch1=ch1-1;//ǰ���ch1����ѭ��֮���Ѿ�ָ���ַ����Ľ�����־'\0'�������1��Ϊ������ָ���ַ��������һ���ַ�

while(ch1>=ch)//��ch1��ָ��string1�����һ���ַ���ʼ��ǰ�ݼ����������ַ������׸��ַ�ʱ����

{ int j=num; //����num,����Ҫ�õ������

if(*ch1!=' ')//��¼ÿ�����ʵĳ��� ���Կո����Ϊ��־

num++;

else // ֪����ÿ�����ʵĳ���֮�󣬾Ϳ�����ѭ�����ַ��Ե���Ϊ��λд������string�У������Ļ����ʾͲ��ᵹ����

{
	int i; 

for(i=j;i>=1;i--,num--)

*(ch2-num)=*(ch1+i);

*ch2=*ch1;

}

ch1--;

ch2++;

}
int i;

for(i=1;i<=num;i++,ch2++)//��Ϊstring1�ĵ�һ������ǰû�пո�����϶��䲻���������Ե�����һ��ѭ���������

*(ch2-num)=*(ch1+i);

*ch2='\0'; //string2�Ľ�����־

}

