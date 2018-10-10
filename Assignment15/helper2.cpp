#include"Header.h"
void pattern2(int ino)
{
	if (ino<0)
	{
		ino = -ino;
	}
	int i = 0;
	char ch = 'A';
	char temp ='\0';
	for(i = 1;i <= ino + 1;i++)
	{

		if (i % 2 != 0)
		{
			printf("%c ", ch);
		}
		else
		{
			temp = ch + 32;
			printf("%c ", temp);
		}
		ch++;
		
	}
}
