﻿//《C语言从入门到精通》P238
// 第 7 章 指  针
// 7.4 字符串与指针
// 48、字符串数组与指针数组

#include<stdio.h>

int main()
{
	int i;
	int j;


	// 字符串数组（相当于二维数组）
	char week[7][10] =
	{
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday",
	};

	for (i = 0; i < 7; i++)
	{
		puts(week + i);
		// 正如同此前输出字符数组（一维数组）一样，引用的是一维数组的首地址（即数组名），要输出二维数组，需要引用每行的首地址
		// week + i 等价于 week[i]
		// 或者：printf("%s\n", week[i]);
	}
	printf("\n");


	// 指针数组（是一个元素为指针的一维数组）
	char* month[] =
	{
		"1 月·孟春",
		"2 月·花朝",
		"3 月·桃浪",
		"4 月·麦序",
		"5 月·仲夏",
		"6 月·荷月",
		"7 月·初秋",
		"8 月·清秋",
		"9 月·霜序",
		"10月·玄冬",
		"11月·隆冬",
		"12月·暮岁",
	};

	for (j = 0; j < 12; j++)
	{
		puts(month[j]);
		// 或者：printf("%s\n", month[j]);
	}

	return 0;
}