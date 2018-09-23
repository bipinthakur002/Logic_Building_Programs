#include"Header.h"
int main()
{
	/* program 1
	int i = 0,*arr=NULL,size=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Array elements before changes:\n");
	for (i = 0;i < size;i++)
	{
		printf(" %d\t", arr[i]);
	}

	Increase(arr, size);

	printf("Array elements after changes:\n");
	for (i = 0;i < size;i++)
	{
		printf(" %d\t", arr[i]);
	}
	return 0;
	*/




	/* Program 2
	int i = 0, *arr = NULL, size = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Array elements before changes:\n");
	for (i = 0;i < size;i++)
	{
		printf(" %d\t", arr[i]);
	}
	 
	EvenOddReplace( arr, size);

	printf("Array elements after changes:\n");
	for (i = 0;i < size;i++)
	{
		printf(" %d\t", arr[i]);
	}
	return 0;
	*/



	/* program 3
	int i = 0, *arr = NULL, size = 0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	 EvenOddDiff(arr,size);

	
	return 0;
	*/




	/* program 4
	int i = 0, *arr = NULL, size = 0,num=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Enter one number:\n");
	scanf_s("%d", &num);


	DisplayDivisible(arr, size,num);


	return 0;
	*/





	/* pprogram 5
	int i = 0, *arr = NULL, size = 0,num=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	ArrReverse(arr, size);
	return 0;
	*/



	/* program 6
	int i = 0, *arr = NULL, size = 0,num=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	SumDigit(arr, size);
	return 0;
	*/


	/* program 7
	int i = 0, *arr = NULL, size = 0,num=0;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Enter one number:\n");
	scanf_s("%d",&num);
	MaxDigit(arr, size,num);
	return 0;
	*/




	/* program 8
	int i = 0, *arr = NULL,*brr=NULL, size1 = 0, size2 = 0,result=0;
	printf("Enter the size of first array:\n");
	scanf_s("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	printf("Enter the size of second array:\n");
	scanf_s("%d", &size2);
	if ((size1 != size2))
	{
		return FALSE;
	}
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second  array:\n");
	for (i = 0;i < size2;i++)
	{
		scanf_s("%d", &brr[i]);
	}

	if ((arr == NULL) || (brr == NULL))
	{
		return FALSE;
	}
	
	result=ArrayCompare(arr, size1,brr,size2);

	if (result == TRUE)
	{
		printf("Array is equal");
	}

	else
	{
		printf("Array is not equal");
	}
	
	return 0;
	*/



	/* program 9
	int i = 0, *arr = NULL,*brr=NULL, size1 = 0, size2 = 0,result=0;
	printf("Enter the size of first array:\n");
	scanf_s("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	printf("Enter the size of second array:\n");
	scanf_s("%d", &size2);
	if ((size1 != size2))
	{
		return FALSE;
	}
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second  array:\n");
	for (i = 0;i < size2;i++)
	{
		scanf_s("%d", &brr[i]);
	}

	if (arr == NULL)
	{
		return FALSE;
	}
	
	result=ArrayDiff(arr, size1,brr,size2);
	if (result < 0)
	{
		result = -result;
	}
	printf("Difference is %d", result);
	
	return 0;
	*/




	/* Program 10
	int i = 0, *arr = NULL,*brr=NULL, size1 = 0, size2 = 0,result=0;
	printf("Enter the size of first array:\n");
	scanf_s("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	result=ChkSorted(arr, size1);

	if (result == TRUE)
	{
		printf("Array is Sorted");
	}

	else
	{
		printf("Array is not sorted");
	}
	
	return 0;
	*/
	
}