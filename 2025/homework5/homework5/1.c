#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//3-1
//int main()
//{
//	int a, b, max;
//	printf("Please input age:");
//	scanf("%d%d", &a, &b);
//	max = a;
//	if (b > max)
//		max = b;
//	printf("max=%d",max);
//
//	return 0;
//}

////3-2
//int main()
//{
//	float a, b, c, t;
//	printf("Please input:");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a, b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%6.2f %6.2f %6.2f\n", a, b, c);
//
//	return 0;
//}

////3-3
//int main()
//{
//	float x, y;
//	scanf("%f",&x);
//	if (x > 0)
//		y = x;
//	else if (x < 0)
//		y = -x;
//	else
//		y = 0;
//	printf("%f\n", y);
//
//	return 0;
//}

////3-4
//int main()
//{
//	int c = 55, t = 60, m;
//	if (t == c)
//	{
//		if (c >= 50)
//			m = c * 80;
//		else
//			m = c * 90;
//	}
//	else if (c > t)
//	{
//		if (t >= 50)
//			m = t * 80 + (c - t) * 60;
//		else
//			m = c * 90;
//	}
//	else
//	{
//		if (c >= 50)
//			m = c * 80 + (t - c) * 45;
//		else
//			m = c * 90 + (t - c) * 45;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}

////3-5
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	y = x >= 0 ? x : -x;
//	printf("y=%d", y);
//
//	return 0;
//}

////3-6
//int main()
//{
//	float a, b;
//	char op;
//	printf("Please enter the expression:");
//	scanf("%f%c%f", &a, &op, &b);
//	switch (op)
//	{
//	case'+':
//		printf("%.2f+%.2f=%.2f\n", a, b, a + b);
//		break;
//	case'-':
//		printf("%.2f-%.2f=%.2f\n", a, b, a - b);
//		break;
//	case'*':
//		printf("%.2f*%.2f=%.2f\n", a, b, a * b);
//		break;
//	case'/':
//		printf("%.2f/%.2f=%.2f\n", a, b, a / b);
//		break;
//	default:
//		printf("error\n");
//	}
//
//	return 0;
//}

//3-7
//int main()
//{
//	float h, w, t;
//	printf("Please enter h,w:");
//	scanf("%f%f", &h, &w);
//	
//	t = w / (h * h);
//	if (t < 18)
//		printf("Lower weight!\n");
//	else if (t < 25)
//		printf("Standard weight!\n");
//	else if (t < 27)
//		printf("Higher weight!\n");
//	else
//		printf("Too fat!\n");
//
//	return 0;
//}

////3-8
//int main()
//{
//	int m, g;
//	srand((unsigned)time(NULL));
//	m =rand() % 99 + 1;
//	printf("Please guess a magic number:");
//	scanf("%d", &g);
//	if (g > m)
//		printf("wrong!Too big!\n");
//	else if (g < m)
//		printf("wrong!Too small!\n");
//	else
//		printf("right!The number is:%d\n", m);
//	
//	return 0;
//}

////3-9
//int main()
//{
//	float a, b, c, p, q, d, x1, x2;
//	scanf("%f%f%f", &a, &b, &c);
//	if (a == 0)
//	{
//		if (b == 0)
//			printf("The equation is not aquadeatic\n");
//		else
//		{
//			x1 = -c / b;
//			printf("The equation has a root:%f\n", x1);
//		}
//	}
//	else
//	{
//		d = b * b - 4*a * c;
//		p = -b / (2 * a);
//		q = sqrt(fabs(d)) / (2 * a);
//		if (d > 0)
//		{
//			x1 = p + q;
//			x2 = p - q;
//			printf("The equation has 2 root:%f%f\n", x1,x2);
//		}
//		else if (d == 0)
//		{
//			x1 = x2 = p;
//			printf("The equation has two equal root:%f\n", x1);
//		}
//		else
//			printf("The equation has complex root\n");
//		printf("%f+%fi and %f-%fi\n", p, q, p, q);
//	}
//
//	return 0;
//}

//3-10
int main()
{
	float p, w = 0;
	int k;
	scanf("%f", &p);
	k = p / 0.5;
	if (k >= 4 && k <= 9)
		k = 4;
	if (k >= 10 && k <= 19)
		k = 10;
	if (k >= 20)
		k = 20;
	switch (k)
	{
	case 0:
		w = 0.01 * p;
		break;
	case 1:
		w = 0.005 + 0.015 * (p - 0.5);
		break;
	case 2:
	case 3:
		w = 0.0125 + 0.02*(p - 1);
		break;
	case 4:
		w = 0.0325 + 0.025 * (p - 2);
		break;
	case 10:
		w = 0.1075 + 0.03 * (p - 5);
	case 20:
		w = 0.2575 + 0.035 * (p - 10);
	}
	printf("w=%f\n", w);

	return 0;
}