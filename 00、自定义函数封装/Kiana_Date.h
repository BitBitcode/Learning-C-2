/*

��Kiana ϵ�п⡿

 ������Kiana_Date.h
 ��飺
	��Kiana ϵ��ͷ�ļ��� BitBitcode �Զ��庯���ķ�װ��
	��Kiana_Date.h ���й�һЩ��������ʱ��Ŀ�
 ��꣺
	������
 �⺯����
    ��int check_date(int y, int m, int d)������������ڵ���Ч��
	��int is_leap_year(int y)���ж��Ƿ�Ϊ����
 ������Ϣ��
	���������䣺smilewwc@qq.com
	��������ҳ��https://bitbitcode.github.io/
	����Դ��ַ��https://github.com/BitBitcode
 �������ڣ�2020.2.13
 ������־��

 Copyright (c) BitBitcode. All rights reserved.

 */


 //����׼���ļ���
#include<stdio.h>


//���Զ���꡿



//��������������������շ���ȷ
//����Դ��Learning-C-37
//�����������ͣ�������жϵ�����
//������ֵ����ȷ���� 1�����󷵻� 0
int check_date(int y, int m, int d)
{
	if (y > 0 && m > 0 && m <= 12 && d > 0 && d <= 31)
	{
		if (m == 2)
		{
			if (is_leap_year(y))	// ���� 2 ��
			{
				if (d > 29)
				{
					printf("��ERROR����һ���2��ֻ��29�죡\n");
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else					// ƽ�� 2 ��
			{
				if (d > 28)
				{
					printf("��ERROR����һ���2��ֻ��28�죡\n");
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d == 31)
			{
				printf("��ERROR�����·�û��31�죡\n");
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else	// 1��3��5��7��8��12��
		{
			return 1;
		}
	}
	else
	{
		if (y < 0)
			printf("��ERROR�����Ӧ����0��\n");
		if (m <= 0 || m > 12)
			printf("��ERROR���·�Ӧ��1��12֮�䣡\n");
		if (d <= 0 || d > 31)
			printf("��ERROR����Ӧ��1��31֮�䣡\n");
		return 0;
	}
}


//���������ж����꣨Leap Year�������귵�� 1��ƽ�귵�� 0��
//����Դ��Learning-C-37
//�����������ͣ�������жϵ����
//������ֵ�����귵�� 1��ƽ�귵�� 0
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		return 1;	// ���귵�� 1
	}
	else
	{
		return 0;	// ƽ�귵�� 0
	}
}