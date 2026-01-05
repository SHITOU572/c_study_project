#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
	//////4-1
	//	int s = 0,n = 1;
	//	while(n < 101)
	//	{
	//		s += n;
	//		n++;
	//	}
	//	printf("s=%d\n", s);
	//
	//	return 0;
	//}

	////4-2
	//int main()
	//{
	//	float h = 0.15;
	//	int time = 0;
	//	while (h <= 8844000)
	//	{
	//		h = 2 * h;
	//		time += 1;
	//	}
	//	printf("time=%d\n", time);
	//
	//	return 0;
	//}

	////4-3
	//int main()
	//{
	//	int s = 0,n = 1;
	//	do
	//	{
	//		s += n++;
	//	} 
	//	while (n < 101);
	//	{
	//		printf("s=%d", s);
	//	}
	//
	//	return 0;
	//}

	////4-4
	//int main()
	//{
	//	int m, g ,count = 0;
	//	srand(time(NULL));
	//	m = (rand() + 1) % 100;
	//	do
	//	{
	//		printf("Please guess a magic number:");
	//		scanf("%d", &g);
	//		count++;
	//		if (g > m)
	//			printf("Wrong!Too big!\n");
	//		else if (g < m)
	//			printf("Wrong!Too small!\n");
	//	} 
	//	while (g != m);
	//	{
	//		printf("Right!the number:%d\ncount=%d\n", m, count);
	//	}
	//
	//	return 0;
	//}

	////4-5
	//int main()
	//{
	//	int s = 0, n;
	//	for (n = 1;n < 101;n++)
	//		s += n;
	//	printf("s=%d\n", s);
	//
	//	return 0;
	//}

	////4-6
	//int main()
	//{
	//	int x, y;
	//	for (x = 1;x < 10;x++)
	//	{
	//		for (y = 1;y < 10;y++)
	//			printf("%5d", x * y);
	//		printf("\n");
	//	}
	//
	//	return 0;
	//}

	////4-7
	//int main()
	//{
	//	float x, p, s, t;
	//	int n = 0, f = 1;
	//	x = 0.5;p = 1;s = x;t = x;
	//	while (fabs(t) >= 1e-6)
	//	{
	//		n++;
	//		p *= n;
	//		f = -f;
	//		t = (f * pow(x, 2 * n + 1)) / ((2 * n + 1) * p);
	//		s += t;
	//	}
	//	printf("s=%f\n", s);
	//
	//	return 0;
	//}

	////4-8
	//int main()
	//{
	//	int x, y, z;
	//	printf("Man\tWoman\tChildren\n");
	//	for (x = 0;x <= 16;x++)
	//	{
	//		for (y = 0;y <= 25;y++)
	//		{
	//			z = 30 - x - y;
	//			if (3 * x + 2 * y + z == 50)
	//				printf("%d\t%d\t%d\n", x, y, z);
	//		}
	//	}
	//
	//	return 0;
	//}

	////4-9
	//int main()
	//{
	//	int f1 = 1, f2 = 1, f3, i;
	//	printf("%d\t%d\n", f1, f2);
	//	for (i = 3;i < 13;i++)
	//	{
	//		f3 = f1 + f2;
	//		printf("%d%c", f3, i % 2 ? '\t' : '\n');
	//		f1 = f2;
	//		f2 = f3;
	//	}
	//
	//	return 0;
	//}

	////4-10
	//int main()
	//{
	//	printf("Please enter a number£º");
	//	int n = 0;
	//	scanf("%d", &n);
	//	
	//	int i = 0;
	//	for (i = 2;i < sqrt(n) + 1;i++)
	//	{
	//		if (n % i == 0)
	//			i++;
	//	}
	//	if (i > sqrt(n))
	//		printf("No!");
	//	else
	//		printf("Yes!");

	////4-11
	//char c;
	//int k;
	//printf("Input k:");
	//scanf("%d", &k);
	//getchar();
	//c = getchar();
	//while (c != '\n')
	//{
	//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	//	{
	//		c += k;
	//		if (c > 'z' || c > 'Z' && c <= 'Z' + k)
	//			c -= 26;
	//	}
	//	printf("%c", c);
	//	c = getchar();
	//}
	//putchar('\n');

	////4-12
	//float x1, x2, r, fx1, fx2, fr, eps = 1e-5;
	//do {
	//	printf("Please enter two number:");
	//	scanf("%f,%f", &x1, &x2);
	//	fx1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
	//	fx2 = 2 * x2 * x2 * x2 - 4 * x2 * x2 + 3 * x2 - 6;
	//} while (fx1 * fx2 > 0);
	//do{
	//	r = (x1 + x2) / 2;
	//	fr = 2 * r * r * r - 4 * r * r + 3 * r - 6;
	//	if (fx1 * fr > 0)
	//	{
	//		x1 = r;
	//		fx1 = fr;
	//	}
	//	else
	//		x2 = r;
	//} while (fabs(x2-x1) >= eps);
	//printf("root=%.2f\n", r);
	
	//4-13
	float x0, x1, x, fx1, fx, eps = 1e-5;
	x = 1.0;
	do {
		x0 = x;
		fx = x0 - 1 - cos(x0);
		fx1 = 1 + sin(x0);
		x = x0 - fx / fx1;
	} while (fabs(x - x0) >= eps);
	printf("root=%.2f\n", x);

	return 0;
}