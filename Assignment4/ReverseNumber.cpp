#include"Header.h"
LONG Reverse(LONG no)
{
	UINT irem = 0, icnt=0;
	while (no != 0)
	{
		irem = no%10;
		icnt = (icnt*10)+irem;
		no = no / 10;

	}
	return icnt;
}