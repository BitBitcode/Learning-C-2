//《C语言从入门到精通》P245
// 第 8 章 结构体与共用体
// 8.3 结构体数组
// 60、按照某个成员排序与寻找最值

#include<stdio.h>
#include<string.h>
#define N 5


struct Student
{
	int num;
	char name[20];
	float score;
	int count;
};


void search(struct Student* p_student, char* p_name)
{
	int i = 0;
	int n = 0;
	for (i = 0; i < N; i++)
	{
		if (!strcmp(p_student[i].name, p_name))
		{
			printf("该学生姓名为：%s\n", p_student[i].name);
			printf("该学生学号为：%d\n", p_student[i].num);
			printf("该学生分数为：%.2f\n", p_student[i].score);
			break;
		}
		n++;
		if (n == N)
		{
			printf("【警告】没有查到信息！\n");
			break;
		}
		// 【回顾 例12】strcmp() 为字符串比较函数，比较ASCII值。相同时返回 0，前大于后返回正数，后大于前返回负数。所以这里加上“非”运算符
	}
}


int main()
{
	int i, j, m;
	float max_score;

	struct Student students[N] =
	{
		{20200002, "小明", 91.5, 0},
		{20200003, "小红", 98, 0},
		{20200005, "小蓝", 82.5, 0},
		{20200001, "小绿", 73, 0},
		{20200004, "小黑", 60.5, 0},
	};

	// 【最大值】
	m = 0;
	max_score = students[0].score;
	for (i = 0; i < 5; i++)
	{
		if (students[i].score > max_score)
		{
			max_score = students[i].score;
			m = i;		// 记录该下标
		}
	}
	printf("=================== 最高分 ===================\n\n");
	printf("最高分为：%.2f\t%s\t%d\n", max_score, students[m].name, students[m].num);
	printf("\n\n\n");


	// 【排序】
	for (i = N-1; i >=1; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (students[i].num > students[j].num)
			{
				students[i].count++;
			}
			else
			{
				students[j].count++;
			}
		}
	}
	printf("==================== 排序 ====================\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t%.2f\t%s\t%d\n", students[i].count, students[i].score, students[i].name, students[i].num);
	}
	printf("\n\n\n");


	// 【查找】
	char name[20];
	printf("==================== 查找 ====================\n\n");
	printf("请输入要查找的姓名：");
	scanf_s("%s", name, 19);
	printf("正在查找：%s，请稍后。。。\n", name);
	search(students, name);
	printf("\n\n\n");

	return 0;
}
