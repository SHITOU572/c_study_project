//int main()
//{
//	//a+=3等价于a=a+3(赋值操作符)
//	//单目操作符：'!’ '-' '+’
//	
//	/*int a = 10;
//	int b = --a;
//	printf("%d\n",a);
//	printf("%d\n",b);*///a--......
//
//	/*int a = (int)3.14;
//	printf("%d\n",a);*///强制类型转换
//	
//	//&& 逻辑与--并且  || 逻辑或---或者
//	/*int a = 0;
//	int b = 20;
//	if (a && b)
//	{
//		printf("hhe\n");
//		return 0;
//	}*/
//	/*int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d",r);*///三目操作符
//
//	//逗号表达式---从左到右依次计算，结果是最后一个表达式的结果
//	//int arr[10] = {1,2,3,4,5,6,6};
//	//arr[3] = 20;//[]下标引用操作符,arr和3都是[]的操作数
//	//printf("%d", arr[4]);
//
//	//函数调用操作符
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = ADD(2,3);//()函数调用操作符，ADD，2，3都是操作数
//	printf("%d",sum);
// return 0;
//}


//常见的关键字--C语言自带的（无法自创）
//auto  自动  void 无  volatile
//变量的命名/不能是关键字/有意义/必须由字母，数字，下滑线组成。不能是数字开头

//typedef 类型重命名
//#include<stdio.h>
//typedef unsigned int uint;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}

//static
//局部变量---改变存储位置---不销毁局部变量，局部变量出了作用域---改变了局部变量的存储内存
//         栈区--堆区--静态区（栈区--静态区）同程序共灭亡
//void test()//void 不需要返回--一般是return，即需要返回个东西
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);//没有return，因为有了void
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////全局变量---改变链接属性
//int add = 0;//假若引用外部变量  extern int a（假设外部变量为a的话）
//            //全局变量具有外部链接属性（不可用static，用了就变成了内部链接属性）
//           //其他源文件（.c）用不了
//int main()
//{
//	printf("%d\n",add);
//
//	return 0;
//}

//函数---与全局变量作用差不多，so，you konw。
//#include<stdio.h>
//extern int ADD(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d",c);
//	return 0;
//}

//register--寄存器
//寄存器（集成到CPU上）--高速缓存器（cache）--内存(16G)--硬盘(500G)
//快（空间小，造价高）--------慢（空间大，造价低）
//int main()
//{
//	register int num =3//建议：3存放在寄存器中
                       //但最终取决于编译器
//	return 0;
//}

// define
//#include<stdio.h>
//#define NUM 100//define定义标识符常量
//int main()
//{
//    printf("%d\n",NUM);
//    int n = NUM;
//    printf("%d\n",n);
//    int arr[NUM] = { 0 };
//    return 0;
//}
//#define ADD(x,y) ((x)+(y))//ADD宏名 （x,y）宏的参数，参数无类型  ((x)+(y)) 宏体
////宏是用来替换的
//int Add(int x, int y)
//{
//    return x + y;
//}//对比函数，观察宏与函数的相似与区别
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = ADD(a, b);
//    printf("%d",c);
//}

//指针！！！
// 32位电脑---现在一般64位电脑（16-32-64GB）
//32根地址线  0/1（正脉冲，负脉冲） 共2*32
//一个地址 1字节；2*32字节=4294967296字节=4GB
//bit-byte(8)-KB(1024)-MB(1024)-TB(1024)-PB(1024)

//#include<stdio.h>
//int main()
//{
//    int a = 10;//向内存申请4字节，存储10
//    int* p = &a;//p是指针变量//思考*与&的关系，一个取地址，一个...--他俩一对，组队出现
//    *p = 20;//*--解引用操作符，意思就是通过p存放的地址，找到p的对象，*p就是p所指的对象
//        printf("%d",a);
//    return 0;
//}


