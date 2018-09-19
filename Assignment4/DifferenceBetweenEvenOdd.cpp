#include"Header.h"
UINT DiffEvenOdd(LONG lno)
{
	UINT iOdd = 0, iEven=0,irem = 0;
	LONG FinalValue = 0;
	if (lno == 0)
	{
		return FALSE;
	}

	if (lno < 0)
	{
		lno = -lno;
	}
	while (lno != 0)
	{
		irem = lno % 10;
		if ((irem % 2) != 0)
		{
			iOdd = iOdd + irem;
		}

		if ((irem % 2) == 0)
		{
			iEven = iEven + irem;
		}

		lno = lno / 10;
		
	}
	FinalValue = iEven - iOdd;
	if (FinalValue < 0)
	{
		FinalValue = -FinalValue;
	}
	return FinalValue;
}