#include"Header.h"
UINT DigitX2(LONG no)
{


	UINT imult = 1;
	UINT iValue = 0;
	UINT irem = 0;
	int iCnt = 0;
	if (no == 0)
	{
		return FALSE;
	}
	if (no < 0)
	{
		no = -(no);
	}

	while (no != 0)
	{
		irem = no % 10;
		if (irem == iValue)
		{
			iCnt++;
		}
		no = no / 10;
	}
	return iCnt;
}


