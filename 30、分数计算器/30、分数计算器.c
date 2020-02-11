//《C语言从入门到精通》P182
// 第 6 章 函  数
// 6.4 函数的调用
// 30、分数计算器

#include<stdio.h>


//【声明】
int gcd(int a, int b);								//【函数】求最大公约数（Greatest_Common_Divisor）
int lcm(int a, int b);								//【函数】求最小公倍数（Least_Common_Multiple）
void reduction(int numerator, int denominator);		//【函数】约分（Reduction）
void add(int a, int b, int c, int d);				//【函数】分数的加法运算
void sub(int a, int b, int c, int d);				//【函数】分数的减法运算
void mul(int a, int b, int c, int d);				//【函数】分数的乘法运算
void div(int a, int b, int c, int d);				//【函数】分数的除法运算


//【主函数】
int main()
{
	int a, b, c, d;
	char type;

	printf("请按示例格式输入算式，按回车结束：\n");
	printf("示例：1/2+3/4\n");
	scanf_s("%d/%d%c%d/%d", &a, &b, &type, 1, &c, &d);
	
	switch (type)
	{
		case '+': add(a, b, c, d); break;
		case '-': sub(a, b, c, d); break;
		case '*': mul(a, b, c, d); break;
		case '/': div(a, b, c, d); break;
	}

	return 0;
}



//【定义】

//【函数】求最大公约数（Greatest_Common_Divisor）
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}


//【函数】求最小公倍数（Least_Common_Multiple）
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}


//【函数】约分（Reduction）
void reduction(int numerator, int denominator)
{
	int Greatest_Common_Divisor;							// 定义整型变量：最大公约数
	
	Greatest_Common_Divisor = gcd(numerator, denominator);	// 先求分子分母的最大公约数

	numerator /= Greatest_Common_Divisor;					// 分子除以最大公约数
	denominator /= Greatest_Common_Divisor;					// 分母除以最大公约数
	printf("运算结果为：%d/%d \n", numerator, denominator);
}


//【函数】分数的加法运算
void add(int a, int b, int c, int d)
{
	int sum_numerator;					// 加法运算后的分子
	int common_denominator;				// 通分后的分母

	common_denominator = lcm(b, d);		// 通分（reduction of fractions to a common denominator）
	sum_numerator = (common_denominator / b * a) + (common_denominator / d * c);

	reduction(sum_numerator, common_denominator);	// 约分
}


//【函数】分数的减法运算
void sub(int a, int b, int c, int d)
{
	int sub_numerator;					// 减法运算后的分子
	int common_denominator;				// 通分后的分母

	common_denominator = lcm(b, d);		// 通分（reduction of fractions to a common denominator）
	sub_numerator = (common_denominator / b * a) - (common_denominator / d * c);

	reduction(sub_numerator, common_denominator);	// 约分
}


//【函数】分数的乘法运算
void mul(int a, int b, int c, int d)
{
	int mul_numerator;					// 乘法运算后的分子
	int mul_denominator;				// 乘法运算后的分母

	mul_numerator = a * c;
	mul_denominator = b * d;

	reduction(mul_numerator, mul_denominator);	// 约分
}


//【函数】分数的除法运算
void div(int a, int b, int c, int d)
{
	int mul_numerator;					// 乘法运算后的分子
	int mul_denominator;				// 乘法运算后的分母

	mul_numerator = a * d;
	mul_denominator = b * c;

	reduction(mul_numerator, mul_denominator);	// 约分
}