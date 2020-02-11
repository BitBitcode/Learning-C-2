//《C语言从入门到精通》P182
// 第 6 章 函  数
// 6.4 函数的调用
// 30、分数计算器

#include<stdio.h>


//【声明】
int gcd(int a, int b);
int lcm(int a, int b);

//【主函数】
int main()
{
	int x=2, y=4;

	printf("%d \n", 1 % 2);
	printf("%d \n", 2%4);
	printf("%d", gcd(x, y));

	return 0;
}



//【定义】

//【函数】求最大公约数（Greatest_Common_Divisor）
int gcd(int a, int b)
{
	return b ? mcd(b, a % b) : a;
}

//【函数】求最小公倍数（Least_Common_Multiple）
int lcm(int a, int b)
{
	return a / mcd(a, b) * b;
}
