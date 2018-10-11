#include"header.h"

void StrCatX(char *str, char *dest)
{
	int icnt = 0;
	if ((NULL == str) && (NULL == dest))
	{
		return;
	}

	while (*str != '\0')
	{
		str++;
		icnt++;
	}
	
	*str = ' ';
	str++;
	

	while (*dest != '\0')
	{
		*str = *dest;
		str++;
		dest++;
	}
	*str = '\0';
}