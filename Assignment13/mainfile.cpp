#include"Header.h"
int main()
{
	/*program 1
	char arr[30] = "Marvellous Multi Os";
	char brr[30] = {'0'};
	strcpyX(arr, brr);
	//printf("%s", arr);
	printf("%s",brr);
	return 0;
	*/

	/* program 2
	char arr[30] = "Marvellous Multi Os";
	char brr[30] = { '0' };
	StrNCpyX(arr, brr,10);
	//printf("%s", arr);
	printf("%s\n", brr);
	return 0;
	*/


	/* prpgram 3
	char arr[30] = "Marvellous Multi Os";
	char brr[30] = { '0' };
	StrCpyCap(arr, brr);
	//printf("%s", arr);
	printf("%s\n", brr);
	return 0;
	*/


	/* program4 
	char arr[30] = "Marvellous multi OS";
	char brr[30] = {'0'};
	StrCpySmall(arr, brr);
	//printf("%s", arr);
	printf("%s\n", brr);
	return 0;
	*/



	/* Program 6	
	char arr[50] = "Marvellous Infosystems"; 
	char brr[30] = "Logic Building";
	StrCatX(arr, brr);   
	printf("%s\n", arr); 
	return 0;
	*/

	/* Progam 6
	char arr[50] = "Marvellous Infosystems";
	char brr[30] = "Logic Building";
	int N = 0;
	printf("Enter how many character you want to concatenate:\n");
	scanf_s("%d",&N);
	StrNCatX(arr, brr,N);
	printf("%s\n", arr);
	return 0;
	*/


	    /* program 7
		BOOL bret = TRUE; 
		char arr[50];  
		char brr[30];
		printf("Enter first String:\n");
		gets_s(arr);
		printf("Enter Second String:\n");
		gets_s(brr);
		bret = StrCmpX(arr, brr);
		if (bret == TRUE) 
		{
			printf("Both strings are equal\n"); 
		}
		else
		{
			printf("Both strings are not equal\n");
		}
		
	   return 0;
	   */
	
	/*Program 8
	BOOL bret = TRUE;
	char arr[50];
	char brr[30];
	int count = 0;
	printf("Enter first String:\n");
	gets_s(arr);
	printf("Enter Second String:\n");
	gets_s(brr);
	printf("Enter how many character you want to check:\n");
	scanf_s("%d", &count);
	bret = StrNCmpX(arr, brr,count);
	if (bret == TRUE)
	{
		printf("Both strings are equal\n");
	}
	else
	{
		printf("Both strings are not equal\n");
	}

	return 0;
	*/

		/* program 9
		char arr[50];  
		printf("Enter first String:\n");
		//scanf_s("%[^'\n']s",arr);
		//scanf_s("%s",arr);
		gets_s(arr);
		StrRevX(arr);
		printf("%s", arr);
	    return 0;
		*/


	BOOL bret;
	char arr[20] = "abccBa"; 
	bret = StrPallindrome(arr); 
	if (bret == TRUE)
	{ 
		printf("String is pallindrome\n");
	}
	else 
	{
		printf("String is not pallindrome\n");
	}  
	return 0;
}

