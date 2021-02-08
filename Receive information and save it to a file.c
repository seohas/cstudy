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
		printf("employee.txt 파일을 열 수 없습니다.");
		exit(0);
	}
	do {
		printf("\n직원 이름: ");
		scanf_s("%s", name, 30);
		printf("나이: ");
		scanf_s("%d", &age);
		printf("월급: ");
		scanf_s("%d", &salary);
		fprintf(fp, "%s %d %d", name, age, salary);
		printf("데이터 추가를 계속하시겠습니까? (y/n): ");
		ch = getche();
	} while (ch!='n');
	fclose(fp);
	return 0;
}
