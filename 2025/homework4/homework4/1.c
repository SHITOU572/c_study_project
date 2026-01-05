#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	char c;

	if (scanf("%d+%d%c",&a,&b,&c)==3)
	{
		printf("%d-%d%c\n", a, b,c);
	}
	if (scanf("%d-%d%c", &a, &b,&c)==3)
	{
		printf("%d+%d%c\n", a, b,c);
	}

	return 0;
}