#include"Header.h"
int main()
{
	/*program 1
	int arr[10] = { 0 };
	int i = 0, size = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d",&arr[i]);

	}
	DisplayEven(arr, size);
	return 0;
	*/



	/* program 2
	int arr[10] = { 0 };
	int i = 0, size = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	DisplayReverse(arr, size);
	return 0;
	*/




	/* Program 3
	int arr[10] = { 0 };
	int i = 0, size = 0,result=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	result=AddEven(arr, size);
	printf("Addition is:\%d", result);
	return 0;
	*/
	



	/* program 4
	float arr[] = { 0.0 };
	float num = 0, result = 0;
	int i = 0, size = 0;

	printf("Enter the size of array:\n");
	scanf_s("%d", &size);

	

	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%f", &arr[i]);

	}

	printf("Enter one number:\n");
	scanf_s("%f", &num);
	Displayfloat(arr, size, num);
	return 0;
	*/


	/* program 5
	int arr[10] = { 0 };
	int i = 0, size = 0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	PrintPrime(arr, size);
	
	return 0;
	*/



	/* program 6 for printing count of the digit of array element
	int arr[] = { 0 };
	int i = 0, size = 0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	PrintDigCount(arr, size);

	return 0;
	*/



/* program7
	int arr[] = { 0 };
	int i = 0, size = 0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	PrintSumDigit(arr, size);

	return 0;
	*/




	/* program 8
	int arr[] = { 0 };
	int i = 0, size = 0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	result=Maximum(arr, size);
	printf("Max is %d", result);
	return 0;
	*/

	
	/* program 9
	int arr[] = { 0 };
	int i = 0, size = 0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	result=Minimum(arr, size);
	printf("Minimum is %d", result);
	return 0;
	*/




	int arr[] = { 0 };
	int i = 0, size = 0,num=0, result = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements in array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);

	}
	printf("Enter number to search its nearest value in array:\n");
	scanf_s("%d", &num);
	result=DisplayNearest(arr, size,num);
	printf("Nearest is %d", result);
	return 0;




	

}