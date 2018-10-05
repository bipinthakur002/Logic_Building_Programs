#include"Header.h"
void StrCpySmall(char *src, char *dest)
{


	if ((*src == NULL) || (*dest == NULL))
	{
		return;
	}

	while (*src != '\0')
	{
		
		if ((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src;
			*dest++;
		}
		
		src++;
	}
}