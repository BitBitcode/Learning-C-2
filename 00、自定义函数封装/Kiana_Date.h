/*

【Kiana 系列库】

 库名：Kiana_Date.h
 简介：
	·Kiana 系列头文件是 BitBitcode 自定义函数的封装库
	·Kiana_Date.h 是有关一些处理日期时间的库
 库宏：
	·暂无
 库函数：
    ·int check_date(int y, int m, int d)：检查输入日期的有效性
	·int is_leap_year(int y)：判断是否为闰年
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


//【自定义宏】



//【函数】检查输入日期日否正确
//【来源】Learning-C-37
//【参数】整型，输入待判断的日期
//【返回值】正确返回 1，错误返回 0
int check_date(int y, int m, int d)
{
	if (y > 0 && m > 0 && m <= 12 && d > 0 && d <= 31)
	{
		if (m == 2)
		{
			if (is_leap_year(y))	// 闰年 2 月
			{
				if (d > 29)
				{
					printf("【ERROR】这一年的2月只有29天！\n");
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else					// 平年 2 月
			{
				if (d > 28)
				{
					printf("【ERROR】这一年的2月只有28天！\n");
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d == 31)
			{
				printf("【ERROR】该月份没有31天！\n");
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else	// 1、3、5、7、8、12月
		{
			return 1;
		}
	}
	else
	{
		if (y < 0)
			printf("【ERROR】年份应大于0！\n");
		if (m <= 0 || m > 12)
			printf("【ERROR】月份应在1至12之间！\n");
		if (d <= 0 || d > 31)
			printf("【ERROR】日应在1至31之间！\n");
		return 0;
	}
}


//【函数】判断闰年（Leap Year）（闰年返回 1，平年返回 0）
//【来源】Learning-C-37
//【参数】整型，输入待判断的年份
//【返回值】闰年返回 1，平年返回 0
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		return 1;	// 闰年返回 1
	}
	else
	{
		return 0;	// 平年返回 0
	}
}