#include"Header.h"
BOOL ChkStrong(int ino)
{
	int icnt = ino, isum = 0, ifact = 1,itemp=0;
	while (ino != 0)
	{
		itemp = ino % 10;
		ifact = 1;
		while (itemp != 0)
		{
			ifact = ifact * itemp;
			itemp--;
		}
		isum = isum + ifact;
		ino = ino / 10;
	}
	if (isum == icnt)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}