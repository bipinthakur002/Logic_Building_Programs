#include"Header.h"
void Displayfloat(float arr[], int size,float num)
{

		int icnt = 0, j = 0;
		for (icnt = 0; icnt <size;icnt++)
		{
			if (arr[icnt] > num)
			{
				printf("%f\t", arr[icnt]);
			}
		}
}
