//《C语言从入门到精通》P162
// 第 6 章 函  数
// 6.1 函数的简介
// 22、求最大公约数与最小公倍数

#include<stdio.h>


//【声明】
int Greatest_Common_Divisor(int num_1, int num_2);		//【函数】求最大公约数
int Least_Common_Multiple(int num_1, int num_2);		//【函数】求最小公倍数


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
	
	x = Greatest_Common_Divisor(a, b);	//【调用】
	y = Least_Common_Multiple(a, b);	//【调用】

	printf("两个数的最大公约数为：%d\n", x);
	printf("两个数的最小公倍数为：%d\n", y);

	return 0;
}


//【定义】

//【函数】求最大公约数
int Greatest_Common_Divisor(int num_1, int num_2)
{
	int t, r;

	// 30例中没有交换顺序的代码，又试了一下把这个交换去掉也不影响
	/*if (num_1 < num_2)
	{
		t = num_2;
		num_2 = num_1;
		num_1 = t;
	}*/

	while ((r = num_1 % num_2) != 0)
	{
		num_1 = num_2;
		num_2 = r;
	}

	return num_2;
}


//【函数】求最小公倍数
int Least_Common_Multiple(int num_1, int num_2)
{
	int h;

	h = Greatest_Common_Divisor(num_1, num_2);

	return (num_1 * num_2 / h);		
	// return 语句其实是有括号的，括号内可以是表达式，而平时只有一个数就省略了
}


// 最大公约数的算法：辗转相除法（和短除法不一样！！）
// 最小公倍数的算法：两数相乘的积除以二者的最大公约数