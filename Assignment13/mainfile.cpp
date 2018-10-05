/*#include"Header.h"
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
	



	
}*/






#include"header.h"

int main()
{
	char str[30];
	char dest[30] = { '\0' };
	int iNo = 0;
	BOOL bRet = TRUE;
	//StrCpyX(str,dest);

	printf("Enter the First String : ");
	scanf("%[^'\n']s", str);

	//printf("Enter the Second String : ");
	//scanf("  %[^'\n']s",dest);


	//printf("Enter the Number : ");
	//scanf(" %d",&iNo);

	//StrNCpyX(str,dest,iNo);

	//StrCpyCap(str,dest);

	//StrCpySmall(str,dest);

	//StrCatX(str,dest);

	//StrNCatX(str,dest,iNo);

	//StrRevX(str);

	//printf("%s \n",str);

	//bRet = StrCmpX(str,dest);

	//bRet = StrNCmpX(str,dest,iNo);

	bRet = StrPallindrome(str);

	if (bRet == TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}


	return 0;
}