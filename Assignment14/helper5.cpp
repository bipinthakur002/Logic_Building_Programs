#include"Header.h"
void StrCap(char *str)
{
	while (*str != '\0')
	{
		if(*str == ' ')
		{
			while ((*str == ' ') && (*str != '\0'))
			{
				str++;
			}
		}
		else
		{
			if (*str != '\0')
			{
				if ((*str >= 'a') && (*str <= 'z'))
				{
					*str = *str - 32;
				}
				while ((*str != ' ') && (*str != '\0'))
				{
					str++ ;
				}
			}
		}
	}
}