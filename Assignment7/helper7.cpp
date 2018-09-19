#include"Header.h"
int Pattern(int ino)
{
	int i = 0;
	while (ino != 0)
	{
		printf("%d ", ino);
		for (i = 0;i < ino;i++)
		{
			printf("# ");
		}
		ino--;
	}
	return 0;
}