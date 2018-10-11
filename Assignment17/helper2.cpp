#include"Header.h"
void pattern2(char *str)
{
	int icnt = 0;
	int i = 0;
	char *temp = str;

	if (str == NULL)
	{
		return;
	}

	while (*temp != '\0')
	{
		icnt++;
		temp++;
	}

	printf("Total Number of character in string is %d\n", icnt);


	for (i = 0; i < icnt; i++)
	{
		for (int j = i; j < icnt; j++)
		{

			if ((str[j] != ' ') && (str[j] != '\0'))
			{
				printf("%c\t", str[j]);
			}
		}
		printf("\n");
	}



}