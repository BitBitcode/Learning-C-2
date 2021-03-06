﻿//《C语言从入门到精通》P234
// 第 7 章 指  针
// 7.3 二维数组与指针
// 45、使用指针输出二维数组的指定元素

#include<stdio.h>

int main()
{
	//【定义二维数组的指针】
	int A[3][5] = { { 11,12,13,14,15 }, { 21,22,23,24,25 }, { 31,32,33,34,35 } };
	int i, j, * p;
	p = A[0];		// A[0]代表第 0 行的首地址，即：&A[0][0]
	//int B[3][5] = { { 99,98,97,96,95 }, { 89,88,87,86,85 }, { 79,78,77,76,75 } };
	//int k, l, * q;
	//q = &B[0][0];	// 以上两种写法是等价的
	
	
	printf("\n【使用指针输出某一行、某一列】\n");



	printf("\n【使用指针输出某一指定元素】\n");
	printf("请输入想要显示的 A 数组元素下标：\n");
	printf("行下标（0~2）：");
	scanf_s("%d", &i);
	printf("列下标（0~4）：");
	scanf_s("%d", &j);
	printf("A[%d][%d] = %d \n", i, j, *(A[i] + j));			// 通过数组名调用地址
	printf("\n");

	//q = &B[0][0];												// 【注意】调用指针输出前一定要先使指针回位！
	//printf("请输入想要显示的 B 数组元素下标：\n");
	//printf("行下标（0~2）：");
	//scanf_s("%d", &k);
	//printf("列下标（0~4）：");
	//scanf_s("%d", &l);
	//printf("B[%d][%d] = %d \n", k, l, *((q + k) + l));			// 通过指针调用地址
	//printf("\n");
}