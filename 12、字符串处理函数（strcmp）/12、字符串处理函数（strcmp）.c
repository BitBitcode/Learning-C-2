//《C语言从入门到精通》P143
// 第 5 章 数  组
// 5.3 字符数组
// 12、字符串处理函数（strcmp）

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;		// 检测输入错误次数
	int m = 0;
	int n = 0;
	char user_name_set[20];
	char password_set[10];

	char user_name_enter[20]; 
	char password_enter[10];
	

	printf("请设定用户名：\n");
	gets_s(user_name_set, 20);
	printf("请设定密码：\n");
	gets_s(password_set, 10);
	printf("已设定！\n");
	printf("\n\n");
	

	//// 字符串比较函数，比较ASCII值。相同时返回 0，前大于后返回正数，后大于前返回负数
	//m = strcmp(user_name_set, user_name_enter);
	//n = strcmp(password_set, password_enter);
	//printf("m=%d; n=%d;", m, n);
	

	// 用户登录示例
	
	while (i < 3)
	{	
		printf("请输入用户名：\n");
		gets_s(user_name_enter, 20);
		if (strcmp(user_name_set, user_name_enter) == 0)
		{
			printf("【校验】\n");
			printf("请输入密码：\n");
			gets_s(password_enter, 10);
			if (strcmp(password_set, password_enter) == 0)
			{
				printf("欢迎使用！\n");
				break;	// 注意break跳出的是while循环，而非跳出if语句
			}
			else
			{
				printf("密码错误！\n");
			}
		}
		else
		{
			printf("用户名错误！\n");
		}	
		i++;
	}

	if (i == 3)
	{
		printf("连续三次输入错误，已锁定！\n");
	}

	return 0;
}