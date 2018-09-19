#include"Header.h"
UINT RentCalculate(int ino)
{
	int icnt = 120,ivalue1=0,  ivalue2 = 0,iDiff=0,iFinalRent=0;
	if (ino <= 0)
	{
		return -1;
	}
	if (ino < icnt)
	{
		ivalue1 = ino * 15;
	}
	else if (ino > icnt)
	{
		iDiff = ino - icnt;
		ivalue1 = iDiff * 10;

		ino = ino - iDiff;
		ivalue2 = ino * 15;
		
	}
	iFinalRent = ivalue1 + ivalue2;
	
	return  iFinalRent;
}