#include"Header.h"
LONG Power(int ino1, int ino2)
{
	int itemp = ino1;
	int icnt = 0;
	while (ino2 > 1)
	{
		ino1 = ino1 * itemp;
		icnt = ino1;
		ino2--;
	}
	return icnt;
}