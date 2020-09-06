//《C语言从入门到精通》P273
// 第 8 章 结构体与共用体
// 8.3 结构体数组
// 59、结构体数组

#include<stdio.h>


struct Student
{
	char Name[20];
	int Num;
	char Sex[4];
	int Grade;
}student_inf[5] = { { "小明", 20200001, "男", 1 },
					{ "小红", 20200002, "女", 1 },
					{ "小蓝", 20190001, "男", 2 },
					{ "小花", 20190003, "女", 2 },
					{ "小黑", 20180021, "男", 3 } };
// 也可以在单独定义变量的时候进行初始化

int main()
{
	int i;

	printf("==================== 学生信息 ====================\n");
	for (i = 0; i < 5; i++)
	{

		printf("姓名：%s\n", student_inf[i].Name);
		printf("学号：%d\n", student_inf[i].Num);
		printf("性别：%s\n", student_inf[i].Sex);
		printf("年级：%d\n", student_inf[i].Grade);
		printf("\n");
	}

	return 0;
}