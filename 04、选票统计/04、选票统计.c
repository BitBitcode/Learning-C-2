//《C语言从入门到精通》P128
// 第 5 章 数  组
// 5.1 一维数组
// 04、选票统计

#include<stdio.h>

int main()
{
	int i;
	int p;					// 参加选举投票的人数
	int a[20] = {0};		// 记录选票（由于不能以变量作为数组大小，只能按一个较大的数来粗略定义）
	int vote_Kiana = 0;		// 琪亚娜的得票数
	int vote_Mei = 0;		// 芽衣的得票数
	int vote_Bronya = 0;	// 布洛妮娅的得票数
	int vote_invalid = 0;	// 无效票数

	printf("请输入参加投票的人数（20以内）：\n");
	scanf_s("%d", &p);

	printf("请输入投票结果（输入对应编号，按回车继续）：\n 1、琪亚娜；\n 2、芽衣；\n 3、布洛妮娅；\n 0、弃  权\n");
	for (i = 0; i < p; i++)
	{
		scanf_s("%d", &a[i]);
	}

	// 统计得票情况
	for (i = 0; i < p; i++)
	{
		if (a[i] == 1)
		{
			vote_Kiana ++;
		}

		else if (a[i] == 2)
		{
			vote_Mei ++;
		}

		else if (a[i] == 3)
		{
			vote_Bronya ++;
		}

		else	// 包括“弃  权”票和投票结果不是“1”、“2”、“3”的无效情况
		{
			vote_invalid ++;
		}
	}

	// 宣布选举结果
	printf("\n琪亚娜的得票数为：%d \n", vote_Kiana);
	printf("芽衣的得票数为：%d \n", vote_Mei);
	printf("布洛妮娅的得票数为：%d \n", vote_Bronya);
	printf("无效票数为：%d \n", vote_invalid);
}
