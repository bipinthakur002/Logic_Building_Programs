#include"Header.h"
void StrcpyX(const char *src, char *dest)
{
	while (*src != '\0')
	{
		if (*src == ' ')
		{
			while ((*src == ' ') && (*src != '\0'))
			{
				src++;
			}
		}
			if (*src != ' ')
			{
				while ((*src != ' ') && (*src != '\0'))
				{
					*dest = *src;
					*src++;
					*dest++;
				}
			}
			
		
	}
	
}