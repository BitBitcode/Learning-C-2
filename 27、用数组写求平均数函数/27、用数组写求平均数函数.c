//《C语言从入门到精通》P175
// 第 6 章 函  数
// 6.3 函数参数
// 27、用数组写求平均数函数

#include<stdio.h>
#define MAX 99

//【声明】
float average(float number[], int n);		//【函数】求平均值


//【主函数】
int main() 
{
	int i, n;	

	float num[MAX];

RE:	printf("请输入样本个数（%d以内）：\n", MAX);
	scanf_s("%d", &n);
	
	if (n > 0 && n <= MAX)
	{
		printf("请依次输入待求数：\n");
	}
	else
	{
		printf("ERROR：最大容量为 %d，请重新输入！\n\n", MAX);
		goto RE;
	}

	for (i = 0; i < n; i++)
	{
		scanf_s("%f", &num[i]);
	}
	
	printf("已存入！\n\n");
	
	printf("样本的平均数为：%.2f \n", average(num, n));	//【调用】
	
	return 0;
}


//【定义】

//【函数】求平均值（注意参数是可变长度的数组）
float average(float number[], int n)
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