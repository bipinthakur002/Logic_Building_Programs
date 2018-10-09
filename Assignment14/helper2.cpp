#include"Header.h"
int WordCount1(char *str)
{

	int icnt = 0, imax=0, itemp=0;
	if (str == NULL)
	{
		return -1;
	}
	while (*str != '\0')
	{
		
		if (*str == ' ')
		{
			while ((*str == ' ') && (*str != '\0'))
			{
				str++;
			}

		}
		else
		{
			if (*str != ' ')
			{

				while ((*str != ' ') && (*str != '\0'))
				{

					imax++;
					icnt++;
					str++;
				}
				itemp = icnt;
				icnt = 0;
				if (imax > itemp)
				{
					imax = itemp;
				}

			}
		}
	}
}