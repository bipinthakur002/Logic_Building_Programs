#include"Header.h"
UINT SumRange(int istart, int iend)
{
	int icnt = 0,isum=0,itemp=0;
	if (istart > iend || iend==0)
	{
		return 1;
	}
	if (istart < 0 )
	{
		istart = -istart;
	}
	while (iend >= istart)
	{
		itemp = iend - istart;
		isum = isum + itemp;
		iend--;
	}
	
	return isum;
}