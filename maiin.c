#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
int main(void)
{
	char buffer1[100];
	char buffer2[100];
	FILE* fp1, *fp2;
	char file1[100], file2[200];
	printf("ù��° ���� �̸�: ");
	scanf_s("%s", file1, 100);
	printf("�ι�° ���� �̸�: ");
	scanf_s("%s", file2, 100);
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "r");
	if (fp1 == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file1);
	}
	if (fp2 == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file2);
	}
	int findflag = 0;
	while (fgets(buffer1, 100, fp1) != 0)
	{
		fgets(buffer2, 100, fp2);
		if (strcmp(buffer1, buffer2)!=0)
		{
			printf("<<");
			puts(buffer1);
			printf(">>");
			puts(buffer2);
			findflag = 1;

		}
	}
	if (findflag == 0)
	{
		printf("%s�� %s�� ��ġ�մϴ�.",file1, file2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

