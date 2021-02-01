#include <stdio.h>
#include <math.h>
#define SIZE 5
double py(double* str1,int size);
void cal(double* str1p2,int size, double m, double* boon, double* pyo);
int main(void)
{
	double str1[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++)
	{
		printf("실수를 입력하시오: ");
		scanf_s("%lf", &str1[i]);
	}
	double m = py(str1, 5);
	double boon, pyo;
	cal(str1,5,m, &boon, &pyo);
	printf("평균:%lf ",m);
	printf("분산:%lf ", pyo);


}
double py(double* str1p1,int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += str1p1[i];
	}
	double boon = sum / size;
	return boon;
}
void cal(double* str1p2, int size,double m,double *boon,double *pyo)
{
	double calsum = 0;
	for (int i = 0; i < size; i++)
	{
		calsum += pow((str1p2[i] - m), 2);
	}
	*boon= calsum / size;
	*pyo = sqrt(*boon);
	
}