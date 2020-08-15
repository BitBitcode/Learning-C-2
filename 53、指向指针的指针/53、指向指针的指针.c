﻿//《C语言从入门到精通》P245
// 第 7 章 指  针
// 7.6 指向指针的指针
// 53、指向指针的指针


// 回顾：50、字符串与指针数组

#include<stdio.h>

int main()
{
	int i;
	char** p;
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

	for (i = 0; i < 12; i++)
	{
		p = month + i;
		printf("%s\n", *p);
	}

	return 0;
}