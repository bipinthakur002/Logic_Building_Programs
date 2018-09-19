#include"Header.h"
BOOL ChkPythagorus(int iNo1, int iNo2, int iNo3)
{
	int Result = 0;
	if ((iNo3*iNo3) == (iNo1*iNo1) + (iNo2*iNo2))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}