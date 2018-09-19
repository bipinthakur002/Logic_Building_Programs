#include"Header.h"
UINT DigitCountX(LONG ino)
{
	UINT icount = 0, irem=0;
	while (ino != 0)
	{
		irem = ino % 10;
		if (irem >= 5)
		{
			icount++;
		}
		ino = ino / 10;
	}
	return icount;
}