#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	system("cls");
	printf("\n\t Enter the value of n:");
	scanf("%d",&n);
	i=1;
up:printf("%d",i);
   i++;
   if (i<=n)
   {
   	goto up;
   }	
    return 0;
}
