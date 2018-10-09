#include"Header.h"
int WordCount(char *str)
{
	int icnt = 0;
	if (str == NULL)
	{
		return -1;
	}
	while (*str !='\0')
	{
		if (*str !=' ')
		{
			icnt++;
			while ((*str != ' ') && (*str != '\0'))
			{
				str++;
			}

		}
		if (*str == ' ')
		{
			while ((*str == ' ') && (*str != '\0'))
			{
				str++;
			}

		}
	}
	return icnt;
}
