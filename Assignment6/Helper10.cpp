#include"Header.h"
UINT FactDigit(UINT ino)
{
	UINT iresult = 0, icnt = 0,irem=0,iFact=1;
	while (ino != 0)
	{
		irem = ino % 10;
		iFact = 1;
		while (irem != 0)
		{
			iFact = iFact * irem;
			irem--;
		}

		icnt += iFact;

		ino = ino / 10;
	}
	return icnt;
}