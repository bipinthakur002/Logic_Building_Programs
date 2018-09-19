#include"Header.h"
UINT DigitDiff(LONG ino)
{
	int irem = 0,imin=ino,imax=0,icnt=0,ifinal=0;
	while (ino != 0)
	{
		irem = ino % 10;
		
		if (irem > imax)
		{
			imax = irem;
		}
		if (irem < imin)
		{
			imin = irem;
		}
		

		ino = ino / 10;
	}

	ifinal = imax - imin;
	if (ifinal < 0)
	{
		ifinal = -ifinal;
	}
	return ifinal;
}