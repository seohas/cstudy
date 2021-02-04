#include<stdio.h>
#include <string.h>
#define WORDS 6
int main(void)
{
	char dic[WORDS][2][50] = {
		{"FUBAO","푸바오"},
		{"BANANA","바나나"},
		{"PINEAPPLE","파인애플"},
		{"GRAPE","포도"},
		{"BLUEBERRY","블루베리"},
		{"RASPBERRY","라즈베리"}
	};
	printf("단어를 입력하십시오: ");
	char ans[50];
	scanf_s(" %s", ans, 50);
	int findflag = 0;
	char kor[50];
	for (int i = 0; i < WORDS; i++)
	{
		if (strcmp(dic[i][0], ans) == 0)
		{
			strcpy_s(kor, 50,dic[i][1]);
			printf("%s: %s", ans, kor);
			return 0;
		}
	}
	
	printf("없는 단어입니다.");
	
	return 0;
}
