#include <stdio.h>
#include <string.h>
int main(void)
{
	char password[5] = "1234";
	char ans[5] = {'\0'};
	while(1)
	{printf("비밀번호를 입력하시오: ");
	for (int i = 0; i < 4; i++)
	{
		char ch = getch();
		putchar('*');
		ans[i] = ch;
	}
		
	if (strcmp(ans, password) == 0)
	{
		printf("\n\n비밀번호 일치\n\n");
		break;
	}
	else
	{
		printf("\n\n일치하지 않음. 다시 입력하세요\n\n");
	}
	}

		
	
	return 0;
 }

