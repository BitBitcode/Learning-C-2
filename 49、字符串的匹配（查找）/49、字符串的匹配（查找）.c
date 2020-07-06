//《C语言从入门到精通》P239
// 第 7 章 指  针
// 7.4 字符串与指针
// 49、字符串的匹配（查找）

#include<stdio.h>
#include<string.h>


int match(char* A, char* B);


int main()
{
	char str1[] = "Kiana Kaslana is beautiful and cute.";
	char str2[] = "cute";
	int position;

	position = match(str1, str2);
	if (position != 0)
	{
		printf("查找到字符串，位置在：%d\n", position);
	}

	return 0;
}


int match(char* A, char* B)
{
	int i, j, start = 0;
	int lastA = strlen(A) - 1;
	int lastB = strlen(B) - 1;
	int endmatch = lastB;

	for (j = 0; endmatch <= lastA; endmatch++, start++)
	{
		if (B[endmatch] == A[lastA])
		{
			for (i = start, j = 0; j < lastB && A[i] == B[j]; )
			{
				i++;
				j++;
			}
			if (j == lastB)
			{
				return (start + 1);
			}
		}
	}
	if (endmatch > lastA)
	{
		printf("没有查找到该字符串！\n");
		return 0;
	}
}