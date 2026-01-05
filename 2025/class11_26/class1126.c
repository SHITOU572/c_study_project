#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//T1.百元百鸡
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	for (x = 0;x < 21;x++)
//	{
//		for (y = 0;y <= 33;y++)
//		{
//			for (z = 0;z <= 100;z++)
//			{
//				if (5 * x + 3 * y + z / 3 == 100 && x + y + z == 100)
//				{
//					printf("%d %d %d\n", x, y, z);
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//T2.最大公约数，最小公倍数
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int i = 1;
	////最小公倍数
	//int m = (a > b) ? a:b;
	//while (a*i%b)
	//{
	//	i++;
	//}
	//printf("%d\n", a * i);

	////最大公约数
	////法一
	//while (a % i + b % i!=0)
	//{
	//	i++;
	//}
	//printf("%d\n",a*i);
	////法二：辗转相除
	//int m = (a > b) ? a : b;
	//int n = (a > b) ? b : a;
	//int r = 1;
	//while(r)
	//{
	//	r = m % n;
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", m);
	//法三：辗转相减
	int m = (a > b) ? a : b;
	int n = (a > b) ? b : a;
	while (n)
	{
		int tmp = m % n;
		m = n;
		n = tmp;
	}
	printf("%d\n", m);

	return 0;
}