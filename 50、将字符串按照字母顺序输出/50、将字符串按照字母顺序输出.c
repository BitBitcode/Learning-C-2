//《C语言从入门到精通》P240
// 第 7 章 指  针
// 7.4 字符串与指针
// 50、将字符串按照字母顺序输出

#include<stdio.h>
#include<string.h>


void order(char* string[], int n);


int main()
{
	int n = 6;
	int i;

	char* str[] =
	{
		"Kiana",
		"Kaslana",
		"Mei",
		"Riden",
		"mihoyo",
		"BH3rd",
	};
	order(str, n);
	for (i = 0; i < n; i++)
	{
		puts(str[i]);
		//printf("%s\n", str[i]);
	}

	return 0;
}


void order(char* strings[], int num)
{
	char* t;
	int i, j;

	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(strings[i], strings[j]) > 0)		// 比较字符大小，交换位置
			{
				t = strings[i];
				strings[i] = strings[j];
				strings[j] = t;
			}
		}
	}
}
