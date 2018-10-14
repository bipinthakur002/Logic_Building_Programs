#include"Header.h"
int main()
{
	int num = 0;
	printf("Enter number:\n");
	scanf_s("%d", &num);
	
	int choice = 0;
	printf("Enter your choice:\n");
	scanf_s("%d", &choice);
	

	switch (choice)
	{
		case 1: pattern1(num);
		        break;


		case 2: pattern2(num);
			    break;

				
		case 3: pattern3(num);
				break;
				
		case 4: pattern4(num);
				break;
				
		case 5: pattern5(num);
				break;
		
	default:printf("Enter valid choice:\n");
		break;

	}

	return 0;




}


