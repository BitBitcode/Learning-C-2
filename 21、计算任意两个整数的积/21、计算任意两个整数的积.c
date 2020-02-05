//《C语言从入门到精通》P161
// 第 6 章 函  数
// 6.1 函数的简介
// 21、计算任意两个整数的积

#include<stdio.h>


//【声明】
float multiplication(float num_1, float num_2);	//【函数】求两个数的乘积


int main()
{
	float a, b;	// 两个因数
	float c;		// 两数的积

	printf("请输入第一个数：\n");
	scanf_s("%f", &a);
	printf("请输入第二个数：\n");
	scanf_s("%f", &b);

	c = multiplication(a, b);	// 【调用】

	printf("两个数的乘积为：%f\n", c);

	return 0;
}


//【定义】
float multiplication(float num_1, float num_2)	//【函数】求两个数的乘积
{
	float result;

	result = num_1 * num_2;

	return result;
}