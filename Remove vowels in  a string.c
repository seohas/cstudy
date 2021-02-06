#include <stdio.h>
#include <string.h>
int main(void)
{
	char vowel[] = {'A','E','I','O','U','a','e','i','o','u'};
	char sentence[100];
	int k=0;
	int i = 0;
	printf("텍스트를 입력한다: ");
	gets_s(sentence, 100);
	for (i = 0; sentence[i] != 0; i++)
	{
		int findflag = 0;
		for (int j = 0; j < 10; j++)
		{
			if (sentence[i] == vowel[j])
			{
				findflag = 1;
				break;
			}
		}
		if (findflag == 0)
		{
			sentence[k++] = sentence[i];
		}
	}
	sentence[k] = 0;
	printf("최종 텍스트: %s", sentence);
	return 0;
}
