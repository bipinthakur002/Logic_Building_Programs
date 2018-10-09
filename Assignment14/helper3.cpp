#include"Header.h"
void StrWrdRev(char *str)
{
	char ch = '\0';
	char *copy = str;
	if (str == NULL)
	{
		return;
	}
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			while ((*copy != ' ') && (*copy != '\0'))
			{
				copy++;
			}
			copy--;
			while (copy >=str)
			{
				ch = *str;
				*str = *copy;
				*copy = ch;
				str++;
				copy--;
			}
		}
		
		else
		{
			if (*str == ' ')
			{
				while ((*str == ' ') && (*str != '\0'))
				{
					str++;
				}

			}          //if
		}           // else
	}             //main while loop
}               //function

