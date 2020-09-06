//《C语言从入门到精通》P289
// 第 8 章 结构体与共用体
// 8.4 结构体指针
// 63、包含结构的结构


#include<stdio.h>


struct date
{
	int year;
	int month;
	int day;
};


struct student
{
	char name[20];
	int num;
	char sex[4];
	struct date birthday;
};

struct student stu[5] = 
{
	{ "小红", 20202345, "女", {1998, 12, 1} },
	{ "小黄", 20204235, "女", {1997, 1, 6} },
	{ "小绿", 20202345, "男", {1996, 5, 20} },
	{ "小青", 20201345, "男", {1997, 10, 3} },
	{ "小蓝", 20202341, "男", {1997, 3, 1} },
};

int main()
{
	printf("=================== 学生信息管理 ===================\n\n");
	for (int i = 0; i < 5; i++)
	{
		printf("姓名：%s\n", stu[i].name);
		printf("性别：%s\n", stu[i].sex);
		printf("学号：%d\n", stu[i].num);
		printf("出生年月：%d年%d月%d日\n", stu[i].birthday.year, stu[i].birthday.month, stu[i].birthday.day);
		printf("\n");
	}
	
	return 0;
}
