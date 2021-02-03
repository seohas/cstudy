#include <stdio.h>
#include <time.h>
#include <stdlib.h>
enum rsp {SCISSORS,ROCK,PAPER};
char *rsps[] = {"가위","바위","보"};
void choose(int choice);
int main(void)
{
	enum rsp;
	while (1)
	{
		srand(time(NULL));
		int randnum = rand() % 3;
		int num;
		printf("가위(0),바위(1),보(2)를 입력하세요: ");
		scanf_s("%d", &num);
		choose(randnum);
		if (num == randnum)
		{
			printf("비겼습니다\n\n");
		}
		else 
		{
			if ((num - randnum == 1)|| (num - randnum == -2))
			{
			
				printf("사용자가 이겼습니다!\n\n");
				
			}
			
			
			else
			{
				
				printf("컴퓨터가 이겼습니다!\n\n");
			}
		}
	}
		
	return 0;
}
void choose(int choice)
{
	switch (choice)
	{
	case 0:
		printf("컴퓨터는 %s를 선택했습니다.",rsps[SCISSORS]);
		break;
	case 1:
		printf("컴퓨터는 %s를 선택했습니다.",rsps[ROCK]);
		break;
	case 2:
	    printf("컴퓨터는 %s를 선택했습니다.",rsps[PAPER]);
		break;
	}

	}

