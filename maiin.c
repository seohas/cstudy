#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
int main(void)
{
	char buffer[100];
	char file[30];
	FILE* fp = NULL;
	printf("������ �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", file, sizeof(file));
	fp = fopen(file,"r");
	if (fp == NULL)
	{
		fprintf(stderr,"���� %s�� �� �� �����ϴ�.", file);
		exit(1);
	}
	int count = 0;
	while (fgets(buffer, 100, fp) != 0)
	{
		count = count + 1;
		printf("%d: %s\n",count, buffer);
		if (count %14==0)
		{
			printf("����Ϸ��� �ƹ� Ű�� ��������....\n");
			char ch = getch();
			continue;
		}
	}
	fclose(fp);
	return 0;
}

