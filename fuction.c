#include<stdio.h>
#define SIZE 10
int reservate(char y);
int yes(int* theaterp);
int main(void)
{

	int theater[SIZE] = { 0 };
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�? (y�Ǵ� n): ");
		char y = 'a';
		scanf_s(" %c", &y, 1);
		//scanf���� %c�� �Է¹��ۿ��� �� ���ڸ� �����ͼ� ans�� �����ϴµ�, �ѹ� ���ڸ� �Է��ϰ� ���� ���๮�ڰ� �о�鿩���� �ι� ���
		//.scanf(" %c",...)ó�� �տ� ��ĭ�� �߰��� �Է¹��۸� �����ϰų� scanf�ڿ� getchar()�� �߰��� ���๮�ڸ� �о���̱�
		char r = reservate(y);
		if (r == 1)
		{
			printf(yes(theater));
		}
		else
		{
			printf("�ȳ��� ���ʽÿ�\n");
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
	printf("���° �¼��� �����Ͻðڽ��ϱ�?\n\n");
	scanf_s("%d", &k);
	theaterp[k-1] = 1;
	printf("����Ǿ����ϴ�.\n\n");
	return theaterp;


}