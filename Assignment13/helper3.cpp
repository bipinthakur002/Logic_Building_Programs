#include"Header.h"
void StrCpyCap(char *src, char *dest)
{
	if ((*src == NULL) || (*dest == NULL))
	{
		return;
	}

	while (*src != '\0')
	{
		if ((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src;
			*dest++;
		}
		*src++;
	}
}