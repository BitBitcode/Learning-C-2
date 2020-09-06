//《C语言从入门到精通》P284
// 第 8 章 结构体与共用体
// 8.4 结构体指针
// 62、结构体作函数的参数


#include<stdio.h>


struct Student
{
	int num;
	char name[20];
	float score;
};

struct Student student_x = { 6362, "Kiana", 648.5 };


void display(struct Student stu)
{
	printf("姓名：%s\n", stu.name);
	printf("学号：%d\n", stu.num);
	printf("分数：%0.2f\n", stu.score);
}


void change_A(struct Student stu)
{
	stu.score += 123;
}


void change_B(struct Student* p_stu)
{
	(*p_stu).score += 123;
}


int main()
{
	printf("========== 结构体作函数参数 ==========\n");
	display(student_x);
	printf("\n");


	printf("======== 结构体指针作函数参数 ========\n");
	struct Student* p;
	p = &student_x;
	change_A(student_x);
	printf("【普通参数】分数：%0.2f（更改无效）\n", student_x.score);
	change_B(p);
	printf("【指针参数】分数：%0.2f（更改有效）\n", student_x.score);
	printf("\n");
	// 【回顾】51、指针变量作函数参数


	printf("======== 结构体成员作函数参数 ========\n");
	printf("学号：%d\n", student_x.num);
	printf("\n");

	return 0;
}