#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int randmove(int beetlepos);
int main(void)
{
	printf("=====A Drunken Beetle=====(PRESS A TO START)\n");
	char A = _getch();
	char tile[10] = { '_' };
	for (int i = 0; i < 10; i++)
	{
		tile[i] = '_';
	}
	int beetlepos = 4;
	tile[beetlepos] = '*';
	while (1)
	{
		for (int i = 0; i < 10; i++)
		{
			tile[i] = '_';
		}
		srand(time(NULL));
		beetlepos = randmove(beetlepos);
		tile[beetlepos] = '*';
		for (int j = 0; j < 10; j++)
		{
			
			printf("%c", tile[j]);
		}
		printf("\n");
		Sleep(100);
		
	}
	return 0;
}
int randmove(int beetlepos)
{
		int randnum = rand() % 2;
		if (randnum == 0)
		{
			beetlepos--;
		}
		else
		{
			beetlepos++;
		}
		if (beetlepos < 0)
		{
			beetlepos = 0;
		}
		else if (beetlepos > 9)
		{
			beetlepos = 9;
		}
		return beetlepos;

}
