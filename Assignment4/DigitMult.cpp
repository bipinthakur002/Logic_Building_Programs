#include"Header.h"
UINT MultiDigit(LONG ino)
{
	UINT imult = 1;
	UINT rem = 0;
	if (ino == 0)
	{
		return FALSE;
	}
	
	if (ino < 0)
	{
		ino =-ino;
	}

	while (ino != 0)
	{
		rem= (ino % 10);
		imult *= rem;
		ino=ino / 10;
		
	}
	return imult;
}