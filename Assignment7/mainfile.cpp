#include"Header.h"
int main()
{
	/* program 1
	int no1 = 0, no2 = 0, res = 0;
	printf("Enter number and its power:\n");
	scanf_s("%d %d", &no1, &no2);
	res = Power(no1, no2);
	printf("%d", res);
	return 0;
	*/



	/* program 2
	LONG num = 0;
	BOOL iresult = 1;
	printf("Enter number:\n");
	scanf_s("%ld", &num);
	iresult=ChkStrong(num);	
	if (iresult == TRUE)
	{
		printf("It is a strong number\n");

	}
	else
	{
		printf("it is not a strong number\n");
	}
	return 0;
	*/


	/* 
	LONG Principle = 0;
	int time = 0;
	float rate = 0;
	int res = 0;
	printf("Enter principle amount,time,rate:\n");
	scanf_s("%ld %d %f", &Principle, &time, &rate);
	res = SimpleInterest(Principle, time, rate);
	printf("Simple Interest is %d\n", res);
	return 0;
	*/
	 





	/* Program 4
	int num = 0, result=0;
	printf("Enter number:\n");
	scanf_s("%d", &num);
	result = Armstrong(num);
	if (result == TRUE)
	{
		printf("it is armstrong number\n");
	}
	else
	{
		printf("it is not armstrong number\n");
	}
	return 0;
	*/

	/* program 5
	
	
	*/



	/* program 6
	int num1 = 0, num2 = 0,iresult=0;
	printf("Enter start and end:\n");
	scanf_s("%d %d", &num1, &num2);
	iresult = SumRange(num1, num2);
	printf("%d", iresult);
	return 0;
	*/




	/* program 7
	int num = 0,result=0;
	printf("Enter number:\n");
	scanf_s("%d", &num);
	result=Pattern(num);
	return 0;
	*/

	

	/* program 9
	char ch = '\0';
	printf("Enter Character:\n");
	scanf_s("%c", &ch);
	Display(ch);
	return 0;
	*/



int num = 0,result=0;
printf("Enter number:\n");
scanf_s("%d", &num);
result = GenRoot(num);
printf("%d", result);
return 0;


}