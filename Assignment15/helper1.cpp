#include"Header.h"
void pattern1(int iNo)
{
	if (iNo)
	{
		iNo = -iNo;
	}
	int i = 0;
	char ch = 'A';
	for (i = 0;i <= iNo;i++)
	{
		printf("%c\t", ch);
		ch++;
	}

}