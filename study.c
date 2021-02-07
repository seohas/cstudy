#include <stdio.h>
#define SIZE 10
double get_array_avg(int values[]);
void print_array(int values[]);
#define DEBUG
int main(void)
{
	printf("배열의 평균을 계산합니다.\n");
	printf("calc_array_avg()\n");
	int values[] = { 1,2,3,4,5,6,7,8,9,10 };
#ifdef DEBUG
	print_array(values);
#endif
	double avr = get_array_avg(values);
	printf("평균: %lf\n", avr);
	printf("배열의 평균: %lf", avr);

	return 0;
}
double get_array_avg(int values[])
{
	double sum = 0.0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += values[i];
	}
	return sum / SIZE;
}
void print_array(int values[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", values[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d를 더하는 중..\n", values[i]);
	}
}