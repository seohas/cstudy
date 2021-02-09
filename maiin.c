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
	printf("파일 이름을 입력하시오: ");
	scanf_s("%s", file, sizeof(file));
	fp = fopen(file, "w");
	if (fp == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file);
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

