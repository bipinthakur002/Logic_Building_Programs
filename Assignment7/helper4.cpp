#include"Header.h"
BOOL Armstrong(int ino)
{
	int itemp1 = ino, icnt = 1,isum=0,itemp=0;
	while (ino != 0)
	{
		itemp = ino % 10;
		itemp = (itemp * itemp * itemp);
		isum = isum + itemp;
		ino = ino / 10;
	}

	if (isum == itemp1)
	{
		return TRUE;

	}
	else
	{
		return FALSE;
	}
}