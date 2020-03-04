// 00、自定义函数封装
// 此文件用来测试 Kiana 系列库封装的函数


#include <stdio.h>
#include "Kiana_Math.h"
#include "Kiana_Martix.h"
#include "Kiana_Date.h"


int main()
{
	//【测试】宏定义：π、e
	float r, L, S;
	r = 3;				// 圆的半径
	L = 2 * PAI * r;	// 圆的周长
	S = PAI * r * r;	// 圆的面积	
	printf("L = %f \n", L);
	printf("S = %f \n", S);
	printf("e^2 = %f \n", E * E);


	//【测试】判断素数
	int n, m;
	printf("请输入：");
	scanf_s("%d", &n);
	m = is_prime_number(n);
	printf("%d", m);


	//【测试】约分函数
	int A, B;
	A = 5;
	B = 125;
	reduction(A, B);


	//【草稿】关于sqrt()
	int a, c;
	float b, d;
	a = sqrt(9);
	b = sqrt(9);
	c = sqrt(2);
	d = sqrt(2);
	printf("a = %d \n", a);
	printf("b = %f \n", b);
	printf("c = %d \n", c);
	printf("d = %f \n", d);

	return 0;
}

