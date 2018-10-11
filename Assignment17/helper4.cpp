#include"Header.h"
void pattern4(char *str)
{
	int icnt = 0;
	int i = 0 , j = 0;
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

	
	for (i = 0 ; i < icnt ; i++)
	{
		for (int j = 0 ; j < icnt ; j++)
		{

			if ((str[j] != ' ') && (str[j] != '\0'))
			{
				if((j == 0) || (j==icnt-1) || (i==0) || (i==icnt-1))
				{
					printf("%c  ", str[j]);
				}
				else
				{
					printf("#  ");
				}
				
			}
		}
		printf("\n");
	}

}