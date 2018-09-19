#include"Header.h"
int GenRoot(int ino)
{
	int temp = 0, isum = 0, iadd = 0, icnt = 0;
	while (ino != 0)
	{
		temp = ino % 10;
		isum = isum + temp;
		ino = ino / 10;

	}
	isum = (isum % 10) + (isum % 100);
		//printf("%d", isum);
		return isum;
	

}
		

	