#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	char name[30];
	int age;
	int salary;
	char ch;
	fp = fopen("employee.txt", "w");
	if (fp == NULL)
	{
		printf("employee.txt ������ �� �� �����ϴ�.");
		exit(0);
	}
	do {
		printf("\n���� �̸�: ");
		scanf_s("%s", name, 30);
		printf("����: ");
		scanf_s("%d", &age);
		printf("����: ");
		scanf_s("%d", &salary);
		fprintf(fp, "%s %d %d", name, age, salary);
		printf("������ �߰��� ����Ͻðڽ��ϱ�? (y/n): ");
		ch = getche();
	} while (ch!='n');
	fclose(fp);
	return 0;
}
