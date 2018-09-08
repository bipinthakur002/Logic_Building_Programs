#include<stdio.h>
//Fibonacci Series of n numbers
void fibonacci(int ino)
{
	int no1 = 0, no2 = 1, no3 = 0;
	int i = 0;

	for (i = 2 ; i <= ino ; i++)
	{
		//Logic
		no3 = no1 + no2;
		printf("%d\t", no3);
		no1 = no2;
		no2 = no3;
		
	}
	

}
int main()
{
	int num = 0;
	printf("enter number:\n");
	scanf_s("%d", &num);
	fibonacci(num);//function calls
	return 0;
}