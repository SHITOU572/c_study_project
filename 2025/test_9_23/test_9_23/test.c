#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//1.猜数字游戏

//void menu()//打印菜单
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//
//}
// 
//0~RAND_MAX(32767)
//void game()
//{
//	//1.生成随机值。
//	int ret = rand() % 100 + 1;//生成随机函数1~100
//	printf("%d\n", ret);//给自己看的
//	//2.猜数字
//	while (1) 
//	{
//		int guess = 0;
//		printf("请猜数字：");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了，往大了猜。\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了，往小了猜。\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了。\n");
//			break;
//		}
//	}
//}
//
////指针
////int *p=NULL(void *)---暂时不用
////int a = 0;
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//rand--srand--time
//	do
//	{
//		menu();
//		printf("请选择(0/1)：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字\n");
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//			}
//	}
//	while (input);
//	return 0;
//}



//goto语句---最常见的应用场景：终止程序在某些深度嵌套的结构的处理过程
//尽量少用goto语句，乱跳容易出bug。


// goto不能跨函数跳转(如下)
//void test()
//{
//again://注意是“：”而非“;”
//}
//
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//}

//关机程序
//1.电脑启动一分钟内自动关机//命令指示符：shutdown -s(设置关机) -t(设置倒计时关机) 60(倒计时长)
//										：shutdown -a(取消关机)
//2.如果输入“我是猪”，取消关机
//法一
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑将在60s内关机，如果输入：我是猪，就取消关机。\n");
//	scanf_s("%s",input,sizeof(input));//加sizeof(input)的意义，char缓冲区不够用了，申请更多地地方放输入数据
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("你确实是猪。\n");
//	}
//	else
//	{
//		printf("取消失败\n");
//		goto again;
//	}
//	return 0;
//}//Debug-->Release,运行一下，看有无exe版（应用程序版），完成
//	 Debug是调试版本---程序调试版本
//   Release是发布版本---是发布给用户的版本
//法二
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意你的电脑将在60s内关机，如果输入：我是猪，就取消关机。\n");
//		scanf_s("%s", input, sizeof(input));
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("你确实是猪。\n");
//			break;
//		}
//	}
//	return 0;
//}



//函数***(子程序)
//库函数+自定义函数
//

#include<stdio.h>
int main()
{
	char ch = 0;
	scanf_s("%c", &ch,sizeof(ch));
	char CH = ch - 32;
	printf("%c %c", ch, CH);
	return 0;
}

