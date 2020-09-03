//《C语言从入门到精通》P245
// 第 7 章 指  针
// 7.8 main函数的参数
// 56、用指向函数的指针作为函数参数


#include<stdio.h>


int sum(int num_1, int num_2);
int sub(int num_1, int num_2);
int max(int num_1, int num_2);
void calculate(int num_1, int num_2, int (*function)());


int main()
{
	int a, b;
	printf("请输入两个数：\n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	// 可以通过将指向函数的参数传递到另一个函数来调用
	// 【注意】只用写函数名称，不需要写括号
	printf("两数之和为：");
	calculate(a, b, sum);
	printf("两数之差为：");
	calculate(a, b, sub);

	// 也可以直接定义一个指向函数的指针来调用
	// 【注意】这里定义的“(*p_calculate)()”实际上表示指向函数的一个指针变量，也就是说“p_calculate”是一个指针变量
	// 【回顾】这个技巧在“46、输出二维数组的指定元素”中也用到过：int(*q)[4] = a;（定义一个指针变量，它指向包含4个整型元素的一维数组）
	int (*p_calculate)();
	int result;
	p_calculate = max;
	result = (*p_calculate)(a, b);
	printf("两数中的最大值为：%d\n", result);

	return 0;
}


// 返回两个数的和
int sum(int num_1, int num_2)
{
	return (num_1 + num_2);
}


// 返回两个数的差
int sub(int num_1, int num_2)
{
	return (num_1 - num_2);
}


// 返回两个数中的最大值
int max(int num_1, int num_2)
{
	if (num_1 >= num_2)
	{
		return num_1;
	}
	else if (num_1 < num_2)
	{
		return num_2;
	}
	else
	{
		printf("\n【ERROR!】\n");
	}
}


// 利用指向函数的指针调用以上计算函数，打印计算结果
void calculate(int num_1, int num_2, int(*p_function)())
{
	int result;
	result = (*p_function)(num_1, num_2);
	printf("%d\n", result);
}
