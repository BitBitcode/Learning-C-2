//《C语言从入门到精通》P148
// 第 5 章 数  组
// 5.3 字符数组
// 16、字符升序排列

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[20];
	char str3[40];
	
	char* p;

	int i = 0;
	int j = 0;
	int k = 0;

	printf("请输入第一个英文字符串\n");
	scanf_s("%s", str1, 20);
	printf("请输入第二个英文字符串\n");
	scanf_s("%s", str2, 20);

	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] < str2[j])
		{
			str3[k] = str1[i];
			i++;
		}
		else
		{
			str3[k] = str2[j];
			j++;
		}
		k++;
	}

	str3[k] = '\n';
	if (str1[i] == '\n')
	{
		p = str2 + j;
	}
	else
	{
		p = str1 + i;
	}
	strcat_s(str3, 40, p);
	puts(str3);

	return 0;
}