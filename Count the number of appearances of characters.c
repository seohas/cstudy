#include <stdio.h>
#include <string.h>
int main(void)
{
	char sentence[100] = { '0' };
	printf("입력 문자열: ");
	scanf_s("%s", sentence, 100);
	int count;
	for (int k = 0; sentence[k] != 0; k++)
	{
		for (int j = 0; sentence[j] != 0; j++)
		{
			if (sentence[k] < sentence[j])
			{
				char tmp;
				tmp = sentence[k];
				sentence[k] = sentence[j];
				sentence[j] = tmp;
			}
		}
	}
	for (int i = 0; sentence[i] != 0; i++)
	{
		count = 0;
		for (int j = i + 1; sentence[j] != 0; j++)
		{
			if (sentence[i] == sentence[j])
			{
				count = j - i;
			}
		}
		if (sentence[i-1] != sentence[i])
		{
			printf("\n\n%c문자가 %d번 등장하였음! ", sentence[i], count+1);
		}
		
	}
	
	return 0;
}
