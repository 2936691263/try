#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//system
#include<string.h>//strcmp

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");

again:
	printf("ע�⣡ϵͳ����60s֮��ػ�����Ҫȡ���ػ��������볷��\n");
	scanf("%s", input);
	if (strcmp(input, "����")==0)//�ж�input�зŵ��ǲ��ǳ���-strcmp-string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}