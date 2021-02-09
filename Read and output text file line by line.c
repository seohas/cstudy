#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char buffer[100];
	FILE* fp = NULL;
	fp = fopen("line.txt", "r");
	//==입력받을때==
	//printf("파일의 이름을 입력하시오: ");
	//scanf_s("%s", file,sizeof(file));
	//fp = fopen(file,"r");
	int c;
	int count = 0;
	if (fp == NULL)
	{
		fprintf(stderr, "파일 line.txt를 열 수 없습니다.");
		//fprintf(stderr,"파일 %s를 열 수 없습니다.", file);
		exit(1);
	}
	while (fgets(buffer, 100, fp) != 0)
	{
		printf(" %s\n", buffer);

		count++;
	} 

	printf("라인의 개수: %d개", count);
	fclose(fp);
	return 0;
}

