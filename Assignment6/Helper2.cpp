#include"Header.h"
UINT ParkingCalculate(int ino)
{
	int  ivalue1 = 0, ivalue2 = 0, iDiff = 0, iFinalRent = 0;
	if (ino <= 0)
	{
		return -1;
	}
	if (ino <= 3)
	{
		ivalue1 = 30;
	}
	else if (ino >=3)
	{
		iDiff = ino - 3;
		ivalue1 = iDiff * 5;

		ino = ino - iDiff;
		ivalue2 = ino * 10;

	}
	iFinalRent = ivalue1 + ivalue2;

	return  iFinalRent;
}