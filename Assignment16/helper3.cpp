#include"Header.h"
void pattern3(int row, int col)
{
	if (row < 0)
	{
		row = -row;
	}
	if (col < 0)
	{
		col = -col;
	}
	int i = 0, j = 0;
	for (i = 1 ; i <= row; i++)
	{

		for (j = 1 ; j <= col ; j++)
		{
			if ((j == 1) || (j == row))
			{
				printf("%d ", i);
			}
			else if((i==1)||(i==row))
			{
				printf("%d ",i);
			}
			else
			{
				printf("* ");
			}
			
		}
		printf("\n");
		

	}
	


}

