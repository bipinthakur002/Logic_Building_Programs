#include"Header.h"
void DisplayNo(LONG ino)
{
	UINT irem = 0, ch = 0;;
	while (ino != 0)
	{
		
		irem = ino % 10;
		switch (ch = irem)
		{
		case 1:
				printf("\tONE");
				break;

		case 2:	printf("\tTWO");
				break;

		case 3:
				printf("\tTHREE");
				break;

		case 4:	printf("\tFOUR");
				break;
		
		case 5:
				printf("\tFIVE");
				break;

		case 6:
			    printf("\tSIX");
				break;
			
		case 7:
				printf("\tSEVEN");
				break;

		case 8:	printf("\tEIGHT");
				break;

		case 9:
				printf("\tNINE");
				break;

		default:
			break;
		
		};
		/*
		if (irem == 1)
		{
			printf("\tONE");
		}

		if (irem == 2)
		{
			printf("\tTWO");
		}
		if (irem == 3)
		{
			printf("\tTHREE");
		}

		if (irem == 4)
		{
			printf("\tFOUR");
		}

		if (irem == 5)
		{
			printf("\tFIVE");
		}
		if (irem == 5)
		{
			printf("\tFIVE");
		}
		if (irem == 6)
		{
			printf("\tSIX");
		}if (irem == 7)
		{
			printf("\tSEVEN");
		}if (irem == 8)
		{
			printf("\tEIGHT");
		}
		if (irem == 9)
		{
			printf("\tNINE");
		}
		*/
		ino = ino / 10;
	}
}