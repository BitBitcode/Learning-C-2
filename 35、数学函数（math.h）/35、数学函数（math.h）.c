//《C语言从入门到精通》P197
// 第 6 章 函  数
// 6.8 库函数
// 35、数学函数（math.h）

#include<stdio.h>
#include<math.h>

int main()
{
	int x, y;
	float z;
	float a = 2.71828, b, c;

	x = -3;
	y = abs(x);
	// labs()：长整型的绝对值
	// fabs()：浮点数的绝对值
	printf("%d \n", y);
	
	//【三角函数】注意是弧度制
	z = sin(3.14/2);
	// cos()
	// tan()
	printf("%f \n", z);

	//【小数分离】
	c = modf(a, &b);
	printf("%f = %f + %f \n", a, b, c);

	return 0;
}