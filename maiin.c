#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
int main(void)
{
	FILE* fp;
	char file[100];
	char buffer[1000];
	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", file, sizeof(file));
	fp = fopen(file, "w");
	if (fp == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file);
		exit(0);
	}
	getchar();
	do {
		gets_s(buffer, sizeof(buffer));
		fputs(buffer, fp);
		fprintf(fp, "\n");
	} while (strlen(buffer)!=0);
	fclose(fp);
	return 0;
}

