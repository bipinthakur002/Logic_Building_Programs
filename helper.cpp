#include"header.h"
void Evenfactor(int ino)
{
	int result = 0;
	if(ino<0)
	{
	ino=-ino;	
	}
	
	int i = 0;

	for (i = 1 ; i <= ino / 2 ; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\t", i);
		}
	}
}
