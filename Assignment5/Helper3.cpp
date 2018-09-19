#include"Header.h"
void Pattern2(int ino)
{
	int  i = 0,j=0;
	for (i = 0; i < ino; i++)
	{
		printf("*  ");
		for (j = i; j <= i; j++)
		{
			printf("#  ");
		}
	}
}