//《C语言从入门到精通》P230
// 第 7 章 指  针
// 7.2 一维数组与指针
// 42、用指针求最大最小值

#include<stdio.h>


//【声明】
void max_min(int a[], int n, int* max, int* min);


//【主函数】
int main()
{
	int i, A[10];
	int max_A, min_A;								// max_a、min_a 是变量

	printf("请输入：\n");
	for (i = 0; i < 10; i++)
	{
		printf("A[%d] = ", i);
		scanf_s("%d", &A[i]);
	}

	max_min(A, 10, &max_A, &min_A);

	printf("最大值为：%d \n", max_A);
	printf("最小值为：%d \n", min_A);

	return 0;
}


//【定义】
void max_min(int a[], int n, int* max, int* min)	// max、min 是指针
{
	int* p;
	*max = *min = a[0];		// 或：*max = *min = *a
	for (p = a + 1; p < a + n; p++)
	{
		if (*p > * max)
		{
			*max = *p;
		}
		else if (*p < *min)
		{
			*min = *p;
		}
	}
}