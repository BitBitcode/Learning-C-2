﻿//《C语言从入门到精通》P225
// 第 7 章 指  针
// 7.2 一维数组与指针
// 41、一维数组与指针

#include<stdio.h>

int main()
{
	//【定义数组的指针】
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 6, 7, 8, 9, 0 };
	int* p, * q, * r;
	p = A;		// 数组名其实就是数组的首地址（不加“&”）
	q = &B[0];	// 以上两种代码实际上是一样的


	//【输出数组中的元素】
	printf("\n【使用指针访问数组】\n");
	for (int i = 0; i < 5; i++)
	{
		printf("A[%d] = %d \n", i, *p++);		// 指针向后移 1 位
		// 也可以这样，两种方法等价：printf("A[i] = %d \n", *(p + i));	
	}
	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		printf("B[%d] = %d \n", j, *(B+j));	// 访问数组名也就是访问指针/地址
		// 【注意】
		// 用数组名访问时不能用“B++”！	
	}


	//【使用指针输入】
	int C[6] = { 0 };
	r = C; // 或：r = &C[0];
	printf("\n【使用指针输入】\n");
	printf("请输入：\n");
	for (int k = 0; k < 5; k++, r++)
	{
		printf("C[%d] = ", k);
		scanf_s("%d", r);
		// for()语句中第三部分的“r++”也可以写在这里
	}
	printf("\n");


	//【注意】此时的指针已经指向了最后一个元素C[4]的后一位
	printf("此时的指针为：%p \n", r);
	printf("C[0]的地址为：%p \n", &C[0]);
	printf("C[5]的地址为：%p \n", &C[5]);
	printf("Tip：可见指针现在的指向已经不是数组的首元素了\n\n");

	// 所以如果要输出，需要将指针调回第一个元素：C[0]
	printf("输出数组C[5]:\n");
	r = &C[0]; // 或：p = C;
	for (int k = 0; k < 6; k++)
	{
		printf("C[%d] = %d \n", k, *r++);
		// 等价于单独写“r++”
	}

	return 0;
}