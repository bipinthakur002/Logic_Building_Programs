#include"Header.h"
UINT OddDigit(LONG lno)
{
	UINT isum = 0, irem = 0;
	while (lno != 0)
	{
		irem = lno % 10;
		if ((irem % 2) != 0)
		{
			isum = isum + irem;
		}
		lno = lno / 10;
	}
	return isum;
}