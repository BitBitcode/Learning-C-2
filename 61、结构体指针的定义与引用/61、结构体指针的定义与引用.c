//《C语言从入门到精通》P281
// 第 8 章 结构体与共用体
// 8.4 结构体指针
// 61、结构体指针的定义与引用


#include<stdio.h>


struct Student
{
	int num;
	char name[20];
	float score;
};


int main()
{
	struct Student student_X = { 0, "小明" };

	// 【结构体变量指针】
	struct Student* p;
	// 【Tips】为了便于理解，建议将“struct XXX”这一整体理解为数据类型说明符：int、float、char 等。或者说这一整体和数据类型说明符具有同等作用
	// 在之前的学习中，指针变量的定义为：“指向数据的类型”+“*”+“指针变量标识符”，这里的数据类型为“struct Student”，所以定义的指针变量自然就是上述写法

	p = &student_X;	// 给指针变量赋值（使指针指向需要的变量）

	student_X.num = 20201234;
	// 使用“students.成员名”与以下两种方法是等价的

	// （1）使用点运算符引用结构体成员
	printf("====================\n");
	printf("学号：%d\n", (*p).num);

	// （2）使用指向运算符引用结构体成员
	printf("姓名：%s\n", p->name);


	// 【结构体数组指针】
	struct Student students[5] =
	{
		{20200002, "小明", 91.5},
		{20200003, "小红", 98},
		{20200005, "小蓝", 82.5},
		{20200001, "小绿", 73},
		{20200004, "小黑", 60.5}
	};

	struct Student* p_students;

	p_students = students;	// 等价于：p_students = &students[0];

	printf("\n====================\n");
	for (int i = 0; i < 5; i++)
	{
		printf("姓名：%s\n", (*p_students).name);
		printf("学号：%d\n", (*p_students).num);
		printf("分数：%0.2f\n", (*p_students).score);
		printf("\n");
	}

	return 0;
}