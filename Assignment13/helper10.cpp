#include"header.h"
BOOL StrPallindrome(char *str)
{
	char *temp = str;
	char cap = '0';
	//char small = '\0';
	if (str == NULL)
	{
		return FALSE;
	}
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			cap = *str + 32;
		}
		else if ((*str >= 'a') && (*str <= 'z'))
		{
			cap = *str - 32;
		}
		else
		{
			return FALSE;
		}
		str++;
	}
	str--;
	while (*temp != 0)
	{
		if ((*temp == *str))
		{
			temp++;
			str--;
		}
	}
	if (temp == '\0')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
