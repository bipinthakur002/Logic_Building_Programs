#include"Header.h"
void pattern2(int ino)
{
	int i = 0;
	char ch = 'A';
	char temp ='\0';
	for (i = 0;i <= ino/2;i++)
	{
		
		printf("%c\t", ch);
		ch++;
		temp = ch + 32;
		printf("%c\t", temp);
		ch++;
		

	}
}