//《C语言从入门到精通》P182
// 第 6 章 函  数
// 6.4 函数的调用
// 30、分数计算器

#include<stdio.h>


//【声明】


//【主函数】
int main()
{


	return 0;
}



//【定义】
int mcd(int a, int b)		//【函数】求最大公约数（max_common_divisor）
{
	return b ? mcd(b, a % b) : a;
}


int mcm(int a, int b)		//【函数】求最小公倍数（min_common_multiple）
{
	return a / mcd(a, b) * b;
}
