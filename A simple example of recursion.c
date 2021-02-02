#include <stdio.h>
#include <math.h>
int main(void)
{
	printf("정수를 입력하세요: ");
	int x = 0;
	scanf_s("%d", &x);
	printf("%d", 1+triple(x));
	return 0;
}
int triple(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else
	{
		return (pow(n, 3) + triple(n - 1));
		
	}
}
