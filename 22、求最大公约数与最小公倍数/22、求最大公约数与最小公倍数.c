//《C语言从入门到精通》P162
// 第 6 章 函  数
// 6.1 函数的简介
// 22、求最大公约数与最小公倍数

#include<stdio.h>


//【声明】
int max_common_divisor(int num_1, int num_2);		//【函数】求最大公约数
int min_common_multiple(int num_1, int num_2);		//【函数】求最小公倍数


//【主函数】
int main()
{
	int a, b;
	int x, y;

	printf("请输入要求的两个数：\n");
	printf("第 1 个数：");
	scanf_s("%d", &a);
	printf("\n");
	printf("第 2 个数：");
	scanf_s("%d", &b);
	printf("\n");
	
	x = max_common_divisor(a, b);	//【调用】
	y = min_common_multiple(a, b);	//【调用】

	printf("两个数的最大公约数为：%d\n", x);
	printf("两个数的最小公倍数为：%d\n", y);

	return 0;
}


//【定义】
int max_common_divisor(int num_1, int num_2)		//【函数】求最大公约数
{
	int t, r;

	
	if (num_1 < num_2)
	{
		t = num_2;
		num_2 = num_1;
		num_1 = t;
	}

	while ((r = num_1 % num_2) != 0)
	{
		num_1 = num_2;
		num_2 = r;
	}

	return num_2;
}


int min_common_multiple(int num_1, int num_2)		//【函数】求最小公倍数
{
	int h;

	h = max_common_divisor(num_1, num_2);

	return (num_1 * num_2 / h);		
	// return 语句其实是有括号的，括号内可以是表达式，而平时只有一个数就省略了
}