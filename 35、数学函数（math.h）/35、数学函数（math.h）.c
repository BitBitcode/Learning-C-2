//《C语言从入门到精通》P197
// 第 6 章 函  数
// 6.8 库函数
// 35、数学函数（math.h）

#include<stdio.h>
#include<math.h>

int main()
{
	int x, y, n;
	float z;
	float a, b, c;

	x = -3;
	y = abs(x);
	// labs()：长整型的绝对值
	// fabs()：浮点数的绝对值
	printf("y = |x| = %d \n", y);
	
	//【三角函数】注意是弧度制
	z = sin(3.14/4);
	// cos()
	// tan()
	printf("sin(π/4) %f \n", z);

	//【小数分离】
	a = 2.71828;
	c = modf(a, &b);
	printf("%f = %f + %f \n", a, b, c);

	//【n次幂】
	n = 10;
	x = 2;
	y = pow(x, n);
	printf("2^10 = %d \n", y);

	return 0;
}