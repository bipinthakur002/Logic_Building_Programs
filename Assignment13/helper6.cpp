#include"header.h"

void StrNCatX(char *str, char *dest,int N)
{
	int icnt = 0;
	if ((NULL == str) && (NULL == dest))
	{
		return;
	}

	while (*str != '\0')
	{
		str++;
		
	}

	*str = ' ';
	str++;
	
	
	while (icnt<=N)
	{
		*str = *dest;
		str++;
		dest++;
		icnt++;
	}
	
}