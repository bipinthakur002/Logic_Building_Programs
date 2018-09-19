#include"Header.h"
UINT DigitX(LONG ino)
{

		UINT imult = 1;
		UINT iValue = 5;
		UINT irem = 0;
		int iCnt = 0;
		if (ino == 0)
		{
			return FALSE;
		}

		if (ino < 0)
		{
			ino = -ino;
		}

		while (ino != 0)
		{
			irem = ino % 10;
			if (irem == iValue)
			{
				iCnt++;
			}
			ino = ino / 10;
		}
		return iCnt;
	}
