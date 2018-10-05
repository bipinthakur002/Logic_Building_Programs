#include"Header.h"
void strcpyX(char *src, char *dest)
{

	if ((*src == NULL) || (*dest == NULL))
	{
		return;
	}
	
	while (*src != '\0')
	{
	    *dest = *src;
		 src++;
		 dest++;
	}
	
}