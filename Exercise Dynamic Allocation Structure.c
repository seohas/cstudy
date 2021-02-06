#include<stdio.h>
#include<stdlib.h>
typedef struct course {
	char subject[10];
	double marks;
}COURSE;
int main(void)
{
	int num=0;
	printf("구조체의 개수: ");
	scanf_s("%d", &num);
	COURSE* ptr;
	ptr = (COURSE*)malloc(num * sizeof(COURSE));
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("과목 이름과 성적을 입력하시오: ");
		scanf_s("%s ", ptr[i].subject,10);
		scanf_s("%lf",&ptr[i].marks);
	}
	printf("저장된 정보 출력: ");
	for (i = 0; i < num; i++)
	{
		printf("%s   %lf\n", ptr[i].subject, ptr[i].marks);
	}
	free(ptr);
	return 0;
}
