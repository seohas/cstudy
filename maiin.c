#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	char buffer[100];
	FILE* fp = NULL;
	fp = fopen("line.txt", "r");
	int c;
	int count = 0;
	if (fp == NULL)
	{
		fprintf(stderr, "���� line.txt�� �� �� �����ϴ�.");
		exit(1);
	}
	while (fgets(buffer, 100, fp) != 0)
	{
		printf(" %s\n", buffer);

		count++;
	} 

	printf("������ ����: %d��", count);
	fclose(fp);
	return 0;
}

