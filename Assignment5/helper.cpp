#include"Header.h"
UINT MinDigit(int ino)
{
	UINT irem = 0, ismall = ino;

	if (ino < 0)
	{
		ino = -ino;
	}
	while (ino != 0)
	{
		irem = ino % 10;

		if (irem < ismall)
		{
			ismall = irem;
		}
		
		ino = ino / 10;
	}

	return ismall;
}
