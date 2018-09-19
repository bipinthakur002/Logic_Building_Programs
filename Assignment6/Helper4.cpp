#include"Header.h"
UINT CalculateHr(UINT ino)
{
	int hr = 0;
	hr = ino/ 60;
	return hr;
}