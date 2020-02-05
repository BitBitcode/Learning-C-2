//《C语言从入门到精通》P165
// 第 6 章 函  数
// 6.2 返回语句
// 23、计算分段函数

// 已知分段函数：
/*
		   [ x^2 ,	( x > 0 )
	f(x) = { x ,	( x = 0 )
		   [ 1/x ,	( x < 0 )
*/
// 通过分段函数来理解函数的返回值

#include<stdio.h>


//【声明】
float f(float n);	// 【函数】分段函数


//【主函数】
int main()
{
	float x, y;
	printf("请输入字变量(x)的值：\n");
	scanf_s("%f", &x);

	y = f(x);	//【调用】
	
	printf("经计算，f(%2.2f) = %2.2f \n", x, y);

	return 0;
}


//【定义】
float f(float n)	// 【函数】分段函数
{
	float m;

	if (n > 0)
	{
		m = n * n;
	}
	else if (n == 0)
	{
		m = n + 10;
	}
	else if (n < 0)
	{
		m = 1 / n;
	}
	else
	{
		printf("ERROR\n");
	}

	return m;
}
