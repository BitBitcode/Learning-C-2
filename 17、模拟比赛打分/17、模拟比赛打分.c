//《C语言从入门到精通》P150
// 第 5 章 数  组
// 5.5 经典范例
// 17、模拟比赛打分

#include<stdio.h>
//#include<string.h>


int main()
{
	int i;
	int j;
	int n;
	float a[100];
	float b[100];
	float sum = 0;

	printf("请输入选手人数：\n");
	scanf_s("%d", &n);
	
	j = 1;
	for (i = 1; i <= n; i++)
	{
		printf("选手%d \n", i);
		printf("请输入裁判所给分数：\n");
		for (; j < 5 * n+1; j++)
		{
			scanf_s("%f", &a[j]);
			sum += a[j];
			if (j % 5 == 0)
			{
				break;
			}
		}
		b[i] = sum;
		sum = 0;
		j++;
	}
	j = 1;
	printf("选手 \t裁判A \t裁判B \t裁判C \t裁判D \t裁判E \t总分 \n");
	for (i = 1; i <= n; i++)
	{
		printf("\n选手%d \n", i);
		for (; j <= 5 * n+1; j++)
		{
			printf("\t%3.1f", a[j]);
			if (j % 5 == 0)
			{
				break;
			}
		}
		printf("\t%3.2f \n", b[i]);
		j++;
	}

	return 0;
}
