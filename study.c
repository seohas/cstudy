#include <stdio.h>
int main(void)
{
	char sentence[100];
	printf("텍스트를 입력하시오: ");
	gets_s(sentence, 99);
	int i, k = 0;
	for (i = 0; sentence[i] != 0; i++)
	{
		if ((sentence[i] != ' ')||(sentence[i+1]!=' '))
		{
			sentence[k++] = sentence[i];
		}
		
	}
	sentence[k] = 0;
	printf("과도한 공백이 제거된 텍스트: ");
	printf("%s", sentence);
	return 0;
}