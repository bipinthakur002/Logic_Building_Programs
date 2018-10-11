#include"Header.h"
BOOL StrNCmpX(char *src, char * dest, int N)
{
	if ((*src == NULL) || (*dest == NULL)|| (N <= 0))
	{
		return FALSE;
	}
	

	while ((*src != '\0') && (*dest != '\0') && (N!=0))
	{


		if ((*src != '\0') || (*dest != '\0') || (N != 0))
		{
			
			if (*src == *dest)
			{
				src++;
				dest++;
				N--;
			}
			else
			{
				break;
			}

		}
		
	}
	if (N == 0)
	{
		return TRUE;
	}
	else
	{
		FALSE;
	}
	
}
