#include"Header.h"
void StrNCpyX(char *src, char *dest, int icnt)
{
	if ((*src == NULL) || (*dest == NULL))
	{
		return;
	}

	while ((*src != '\0') && (icnt != 0))
	{
		*dest = *src;
		dest++;
		src++;
		icnt --;
	}
}