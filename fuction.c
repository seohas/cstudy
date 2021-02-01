#include<stdio.h>
#define SIZE 10
int reservate(char y);
int yes(int* theaterp);
int main(void)
{

	int theater[SIZE] = { 0 };
	while (1)
	{
		printf("좌석을 예약하시겠습니까? (y또는 n): ");
		char y = 'a';
		scanf_s(" %c", &y, 1);
		//scanf에서 %c는 입력버퍼에서 한 문자를 가져와서 ans에 대입하는데, 한번 문자를 입력하고 남은 개행문자가 읽어들여져서 두번 출력
		//.scanf(" %c",...)처럼 앞에 빈칸을 추가해 입력버퍼를 무시하거나 scanf뒤에 getchar()을 추가해 개행문자를 읽어들이기
		char r = reservate(y);
		if (r == 1)
		{
			printf(yes(theater));
		}
		else
		{
			printf("안녕히 가십시오\n");
		}
	}
	return 0;
}
	int reservate(char y)
{
	if (y == 'y')
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int yes(int *theaterp)
{
	int k = 0;
	printf("\n\n----------------------------\n\n");
	for (int j = 1; j < 11; j++)
	{
		printf("%d ", j);
	}
	printf("\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", theaterp[i]);
			
	}
	printf("\n\n");
	printf("-----------------------------\n\n");
	printf("몇번째 좌석을 예약하시겠습니까?\n\n");
	scanf_s("%d", &k);
	theaterp[k-1] = 1;
	printf("예약되었습니다.\n\n");
	return theaterp;


}