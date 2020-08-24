//《C语言从入门到精通》P245
// 第 7 章 指  针
// 7.7 函数型指针
// 54、返回值为指针的函数

#include<stdio.h>

/*
【普通写法】
int circumference(int a, int b);

int main()
{
	int length, width, result;
	printf("请输入长方形的长：\n");
	scanf_s("%d", &length);
	printf("请输入长方形的宽：\n");
	scanf_s("%d", &width);
	result = circumference(length, width);
	printf("长方形的周长是：%d\n", result);
	return 0;
}

int circumference(int a, int b)
{
	return (a + b) * 2;
}
*/


//【指针写法】
int* circumference(int a, int b);

int cir;	// 全局变量

int main()
{
	int length, width;
	int* result;

	printf("请输入长方形的长：\n");
	scanf_s("%d", &length);
	printf("请输入长方形的宽：\n");
	scanf_s("%d", &width);
	result = circumference(length, width);

	printf("长方形的周长是：%d\n", *result);

	return 0;
}

int* circumference(int a, int b)
{
	int* p;
	p = &cir;
	cir = (a + b) * 2;
	return p;
}