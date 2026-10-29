#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	system("cls");
	printf("\n\t Enter the values of a&b:");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("\n\t Both numbers are equal");
	}
	else
	{
		printf("\n\t Both numbers are not equal");
	}
	
	return 0;
}
