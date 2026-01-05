#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int sum = 0;
	int sum_ = 0;
	while (n)
	{
		n--;
		int num = 0;
		scanf("%d", &num);
		if (num > 0)
			sum += num;
		else
			sum_ += num;
	}
	printf("%d %d\n", sum, sum_);

	return 0;
}