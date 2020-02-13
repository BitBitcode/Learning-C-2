/*

【Kiana 系列库】

 库名：Kiana_math.h
 简介：
	·Kiana 系列头文件是 BitBitcode 自定义函数的封装库
	·Kiana_Math.h 是有关一些数学运算的库
 库宏：
	·PAI 3.1415926
	·E 2.7182818
 库函数：
	·int is_prime_number(int num)：判断一个数是否为素数
	·float average_array(float number[], int n)：求数组的平均值
	·int gcd(int a, int b)：求最大公约数
	·int lcm(int a, int b)：求最小公倍数
	·void reduction(int numerator, int denominator)：约分
 更多信息：
	·个人邮箱：smilewwc@qq.com
	·个人网页：https://bitbitcode.github.io/
	·开源地址：https://github.com/BitBitcode
 创建日期：2020.2.13
 更新日志：

 Copyright (c) BitBitcode. All rights reserved.

 */


//【标准库文件】
#include<stdio.h>
#include<math.h>


//【自定义宏】
// 以下是数学中常用的一些常数，默认小数点后 7 位（浮点数输出小数点后 6 位，常数定义为 7 位足以满足要求）
#define PAI 3.1415926		// 【π】圆周率
#define E 2.7182818			// 【e】自然底数


//【函数】判断一个数是否为素数（Prime Number）
//【来源】Learning-C-24
//【参数】整型，输入待判断的数
//【返回值】是素数返回 1，不是素数返回 0
int is_prime_number(int num)
{
	int signal = 1;
	int i;

	if (num <= 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < num / 2; i++)	// 判断是否能整除，能整除则为素数
		{
			if (num % i == 0)
			{
				signal = 0;
				break;
			}
		}
		return signal;
	}
}


//【函数】求数组的平均值
//【来源】Learning-C-27
//【参数】浮点型，可变长度数组；整型，数组长度
//【返回值】浮点型，平均值
float average_array(float number[], int n)
{
	int i;
	float average_value;
	float sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += number[i];
	}

	average_value = sum / n;

	return average_value;
}


//【函数】求最大公约数（Greatest_Common_Divisor）
//【来源】Learning-C-30
//【参数】整型，数字a；整型，数字b
//【返回值】整型，最大公约数
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}


//【函数】求最小公倍数（Least_Common_Multiple）
//【来源】Learning-C-30
//【参数】整型，数字a；整型，数字b
//【返回值】整型，最小公倍数
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}


//【函数】约分（Reduction）
//【来源】Learning-C-30
//【参数】整型，分子；整型，分母
//【返回值】空类型
void reduction(int numerator, int denominator)
{
	int Greatest_Common_Divisor;							// 定义整型变量：最大公约数

	Greatest_Common_Divisor = gcd(numerator, denominator);	// 先求分子分母的最大公约数

	numerator /= Greatest_Common_Divisor;					// 分子除以最大公约数
	denominator /= Greatest_Common_Divisor;					// 分母除以最大公约数
	printf("约分后为：%d/%d \n", numerator, denominator);
}