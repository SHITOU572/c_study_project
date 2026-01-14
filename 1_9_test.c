#include<stdio.h>
#include<stdlib.h>
#include<string.h>


////动态内存管理:malloc,free,calloc,realloc

//malloc - free
/*int main()
{
	int arr[10] = {0};//(栈区开辟空间)
	//动态内存开辟(堆区)
	int* p = (int*)malloc(INT_MAX);//强转  ||INT_MAX - X86环境下有效
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//没有free - 内存泄露(内存分配了，没还，以后没法用了)
	//当程序退出时，系统自动回收内存空间。

	free(p);
	p = NULL:
	return 0;
}*/

//free
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	free(p);
	p = NULL;
	return 0;
}*/
//当free(NULL)时，free语句无意义，啥都不干
/*int main()
{
	int a = 10;
	int* p = &a;
	free(p);
	//...
	p = NULL;
	free(p);
	return 0;
}*/

//好玩的
/*int main()
{
	while (1)
	{
		malloc(1);
	}
	return 0;
}*/

//calloc(默认初始化+malloc)
/*int main()
{
	int* p = (int*)calloc(10, 4);//默认初始化
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	free(p);
	p = NULL;

	return 0;
}*/

//realloc
//找一块放的下空间，开辟新空间，拷贝先前数据，释放先前申请的空间
/*int main()
{
	int* p = calloc(10, 4);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr = realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;//为什么？  防止扩容失败，p=NULL后,找不到之前的数据
	}
	//使用
	for (i = 0; i < 20; i++)
	{
		*(p + i) = i + 1;
	}
	free(p);
	p = NULL;

	return 0;
}*/
//realloc = malloc
/*int main()
{
	realloc(NULL, 40);//malloc(40);
	return 0;
}*/

//不要频繁、大量的开辟空间 - 内存碎片，利用效率下降？	ans:内存池 可以维护

//练习 - ContactDynamicVersion


////常见的动态内存错误

//1.对NULL指针解引用操作
/*void test()
{
	int* p = (int*)malloc(40);
	*p = 20;
	free(p);
}*/

//2.对动态内存的越界访问
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	//方式
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;

	return 0;
}*/

//对非动态开辟内存使用free释放
/*int main()
{
	int a = 10;
	int* p = &a;
	//...
	free(p);
	p = NULL;

	return 0;
}*/

//4.使用free释放一块动态内存开辟的一部分
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;//p[10]
	}
	//释放
	free(p);//但是这里已经越界了
	p = NULL;
	//*注意此时p的位置已经改变，无法释放所有已申请的动态内存

	return 0;
}*/

//5.对同一块动态内存多次释放
/*int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	free(p);
	//若此处存在 p=NULL; 后一个free(p)啥都不干，无所谓影响
	//...
	free(p);//若上方的 p=NULL; 不存在，此处的p为野指针
	p = NULL;

	return 0;
}*/

//6.动态开辟内存忘记释放(内存泄露)
/*void test()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return;
	}
	//...
	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
		return;//没有机会执行释放，于是内存泄漏
	//...
	free(p);
	p = NULL;
}
int main()
{
	test();
	return 0;
}*/
/*test()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
		return p;
	//...
	return p;
}
int main()
{
	int* ret=test();
	//忘记释放 - 内存泄露
	return 0;
}*/


////笔试题《高质量C++编程》

//T1:内存泄露+str任为NULL,打印不出来(返回栈空间的地址的问题)
/*void GetMemory(char* p)// -> **p
{
	p = (char*)malloc(100);// -> *p
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);// -> *str
	strcpy(str, "hello world");
	printf(str);
}*/

//T2:返回栈空间的地址的问题
/*int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p=test();//野指针
	printf("hehe\n");
	printf("%d\n", *p);//wrong

	return 0;
}*/

//T3:忘记释放
/*void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test()
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str);
	//str = NULL;只差一个释放
}
int main()
{
	Test();

	return 0;
}*/

//T4.
/*void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	//str=NULL;

	if (str != NULL)//str是野指针 - 非法访问
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}*/

////C/C++程序的内存开辟
/*...写了但是没保存，fucking, cnmsb!*/
