#include"Header.h"
int main()
{
	
	char arr[50];
	int choice = 0;
	printf("Enter string:\n");
	gets_s(arr);
	
	printf("Enter your choice:\n");
	scanf_s("%d",&choice);

	  switch (choice)
	{
		case 1: pattern1(arr);
				break;


		case 2: pattern2(arr);
			break;

		case 3: pattern3(arr);
			break;

		case 4: pattern4(arr);
			break;
			
		case 5: pattern5(arr);
			break;

		default:printf("Enter valid choice:\n");
			break;

	  }
	
	return 0;
	



}


