#include <stdio.h>
#include"hello.h"
int main(void)
{
	int values[] = { 1,2,3,4,5,6,7,8,9,10 };
	print_array(values,10);
	printf("\n");
	int sum = get_sum_of_array(values,10);
	printf("배열 요소들의 합=%d", sum);

}