#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}

int min(int x, int y)
{
	if (x >= y)
		return y;
	else
		return x;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int ma = 0;
	int mi = 0;
	int mid = 0;
	scanf("%d %d %d",&a,&b,&c);

	ma = max(max(a, b), max(b, c));
	mi = min(min(a, b), min(b, c));
	mid = (a + b + c) - (ma + mi);

	printf("%d %d %d",mi,mid,ma);

	return 0;
}