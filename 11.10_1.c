#include<stdio.h>
int main()
{
	char a[99999];
	gets(a);
	printf("%d",strlen(a));
	return 0;
}
