#include"header.h"
void StrRevX(char *str)
{

	if (str == NULL)
	{
		return;
	}

	char ch;
	char *first, *last;
	first = str;
	last = str;
	int icnt = 0;

	while (*last != '\0')
	{
		last++;
	}
	last--;
	while (last >= str)
	{
		ch = *str;
		*str = *last;
		*last = ch;
		str++;
		last--;
	}
	

}
