#define _CRT_SECURE_NO_WARNINGS
#define MAX_STUDENT 50 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//课上的一些小练习
//int TotalOdd(int x, int y)
//{
//	int i=0;
//	int ret=0;
//	for (i = x; i <= y; i++)
//	{
//		if (i % 2==1)
//		{
//			ret += i;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d,%d", &n, &m);
//	int ret=TotalOdd(n, m);
//	printf("%d", ret);
//
//	return 0;
//}


//int IsPrime(int n)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", IsPrime(n));
//
//	return  0;
//}


//int Total(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Total(n));
//	return 0;
//}

//double Total2(int n)
//{
//	int i = 0;
//	double cnt = 0;
//	double sum = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (i % 3 == 0 && i % 7 == 0)
//		{
//			cnt = 1.0 / i;
//			sum += cnt;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%.3lf\n", sqrt(Total2(n)));
//
//	return 0;
//}

struct Student {
    char id[20];    
    char name[20];  
    float score;   
};
struct Student stuArr[MAX_STUDENT]; 
int stuCount = 0;                    

void inputScore() {
    if (stuCount >= MAX_STUDENT) {
        printf("学生数量已达上限，无法继续输入！\n");
        return;
    }
    printf("请输入学生信息（学号 姓名 成绩）：\n");
    scanf("%s %s %f", stuArr[stuCount].id, stuArr[stuCount].name, &stuArr[stuCount].score);
    stuCount++;
    printf("输入成功！当前共 %d 名学生\n", stuCount);
}

void queryScore() {
    if (stuCount == 0) {
        printf("暂无学生信息！\n");
        return;
    }
    char targetId[20];
    printf("请输入要查询的学生学号：");
    scanf("%s", targetId);

    int i;
    for (i = 0; i < stuCount; i++) {
        if (strcmp(stuArr[i].id, targetId) == 0) {
            printf("查询结果：学号=%s，姓名=%s，成绩=%.2f\n",
                stuArr[i].id, stuArr[i].name, stuArr[i].score);
            return;
        }
    }
    printf("未找到学号为 %s 的学生！\n", targetId);
}

void deleteScore() {
    if (stuCount == 0) {
        printf("暂无学生信息可删除！\n");
        return;
    }
    char targetId[20];
    printf("请输入要删除的学生学号：");
    scanf("%s", targetId);
    int i, j;
    for (i = 0; i < stuCount; i++) {
        if (strcmp(stuArr[i].id, targetId) == 0) {
            for (j = i; j < stuCount - 1; j++) {
                stuArr[j] = stuArr[j + 1];
            }
            stuCount--;
            printf("学号为 %s 的学生信息已删除！\n", targetId);
            return;
        }
    }
    printf("未找到学号为 %s 的学生！\n", targetId);
}

void sortScore() {
    if (stuCount < 2) {
        printf("学生数量不足，无需排序！\n");
        return;
    }
    int i, j;
    struct Student temp;
    for (i = 0; i < stuCount - 1; i++) {
        for (j = 0; j < stuCount - 1 - i; j++) {
            if (stuArr[j].score < stuArr[j + 1].score) {
                temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
    printf("成绩已按从高到低排序完成！\n");
}

void showScore() {
    if (stuCount == 0) {
        printf("暂无学生信息！\n");
        return;
    }
    printf("当前学生信息列表：\n");
    printf("学号\t\t姓名\t\t成绩\n");
    printf("-------------------------------\n");
    int i;
    for (i = 0; i < stuCount; i++) {
        printf("%s\t\t%s\t\t%.2f\n", stuArr[i].id, stuArr[i].name, stuArr[i].score);
    }
}

void calculateAverage() {
    if (stuCount == 0) {
        printf("暂无学生信息，无法统计平均分！\n");
        return;
    }
    float sum = 0.0;
    int i;
    for (i = 0; i < stuCount; i++) {
        sum += stuArr[i].score;
    }
    float average = sum / stuCount;
    printf("当前所有学生的平均分为：%.2f\n", average);
}

void exitSystem() {
    printf("感谢使用，系统已退出！\n");
}

int main() {
    int choice;
    while (1) {  
        printf("\n===== 学生成绩管理系统 =====\n");
        printf("1. 成绩输入\n");
        printf("2. 成绩查询\n");
        printf("3. 成绩删除\n");
        printf("4. 成绩排序\n");
        printf("5. 显示成绩\n");
        printf("6. 统计平均分\n");
        printf("7. 退出系统\n");
        printf("请输入操作序号：");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            inputScore();
            break;
        case 2:
            queryScore();
            break;
        case 3:
            deleteScore();
            break;
        case 4:
            sortScore();
            break;
        case 5:
            showScore();
            break;
        case 6:
            calculateAverage();
            break;
        case 7:
            exitSystem();
            return 0; 
        default:
            printf("输入错误，请重新选择！\n");
        }
    }
}

