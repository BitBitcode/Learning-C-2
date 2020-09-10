//《C语言从入门到精通》P290
// 第 8 章 结构体与共用体
// 8.5 链  表
// 64、链表


#include<stdio.h>
#include<stdlib.h>


struct Student
{
	char name[20];
	int num;
	float score;
	struct Student* pNext;
};



int i;		// 链表节点的数量


// 【函数】创建链表，返回指针
struct Student* create()
{
	struct Student* pHead = NULL;	// 初始化链表头指针为空
	struct Student* pEnd;
	struct Student* pNew;
	
	i = 0;		// 初始化链表节点数量为 0

	pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));
	printf("请输入姓名：\n");
	scanf_s("%s", &(*pNew).name, 19);		// (*pNew).name 等价于 *pNew->name
	printf("请输入学号：\n");
	scanf_s("%d", &(*pNew).num);		// (*pNew).num 等价于 *pNew->num
	printf("请输入分数：\n");
	scanf_s("%f", &(*pNew).score);		// (*pNew).score 等价于 *pNew->score
	while ((*pNew).num != 0)
	{
		i++;
		if (i == 1)
		{
			(*pNew).pNext = pHead;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			(*pNew).pNext = NULL;
			(*pEnd).pNext = pNew;
			pEnd = pNew;
		}
		pNew = (struct Student*)malloc(sizeof(struct Student));
		printf("请输入姓名：\n");
		scanf_s("%s", &(*pNew).name, 19);		// (*pNew).name 等价于 *pNew->name
		printf("请输入学号：\n");
		scanf_s("%d", &(*pNew).num);		// (*pNew).num 等价于 *pNew->num
		printf("请输入分数：\n");
		scanf_s("%f", &(*pNew).score);		// (*pNew).score 等价于 *pNew->score
	}
	free(pNew);
	return pHead;
}


void display(struct Student* pHead)
{
	struct Student* pTemp;
	int n = 1;
	printf("链表节点数：%d\n", i);
	pTemp = pHead;
	while (pTemp != NULL)
	{
		printf("成员[%d]：\n", n);
		printf("姓名：%s\n", (*pTemp).name);
		printf("学号：%d\n", (*pTemp).num);
		printf("分数：%0.2f\n", (*pTemp).score);
		printf("\n");
		pTemp = (*pTemp).pNext;
		n++;
	}
}


int main()
{
	struct Student* pHead;

	pHead = create();
	display(pHead);

	return 0;
}