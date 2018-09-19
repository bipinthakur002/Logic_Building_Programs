#include"Header.h"
  LONG SimpleInterest(LONG principle, int time, float rate)
{
	LONG result = 0.0;
	result = ((principle*time*rate) / 100);
	return result;
}