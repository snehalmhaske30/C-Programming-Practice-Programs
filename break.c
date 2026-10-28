#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	system("cls");
	printf("\n\t Enter the value of n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d",i);
		if(i==3)
		{
			break;
		}
		printf("%d",i);
	}
	return 0;
}
