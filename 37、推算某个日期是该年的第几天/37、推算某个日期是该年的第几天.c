//《C语言从入门到精通》P209
// 第 6 章 函  数
// 6.9 经典范例
// 37、推算某个日期是该年的第几天【部分原创】

#include<stdio.h>


//【声明】
int check_date(y, m, d);
int is_leap_year(int year);
int day_number(int y, int m, int d);


//【主函数】
int main()
{
	int year, month, day, num;

RE:	printf("请按示例格式输入日期：\n");
	printf("【示例】2020.2.13\n");
	scanf_s("%d.%d.%d", &year, &month, &day);
	
	if (check_date(year, month, day) == 0)
	{
		printf("请重新输入！\n\n");
		goto RE;		//注意：标签的作用域不能跨函数
	}

	num = day_number(year, month, day);
	printf("这个日期是这一年的第 %d 天 \n", num);

	return 0;
}


//【定义】

//【函数】检查输入日期日否正确（正确返回 1，错误返回 0）
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
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		return 1;	// 闰年返回 1
	}
	else
	{
		return 0;	// 非闰年返回 0
	}
}


//【函数】推算第几天
int day_number(int y, int m, int d)
{
	int day_num = 0;
	int RN[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//闰年各月份天数
	int PN[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };	//平年各月份天数

	if (is_leap_year(y))
	{
		for (int i = 0; i < m; i++)
		{
			day_num += RN[i];
		}
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			day_num += PN[i];
		}
	}

	return day_num;
}
