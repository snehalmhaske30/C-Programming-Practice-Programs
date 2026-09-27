#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	system ("cls");
	printf("\n\t Enter the value of a:");
	scanf("%d",&a);
	printf("\n\t Enter the value of b:");
	scanf("%d",&b);
	a&&b;
	printf("\n\t a&&b: a=%d b=%d",a,b);
	a=!!b;
	printf("\n\t a!!b: a=%d b=%d",a,b);
	a!=b;
	printf("\n\t a!=b: a=%d b=%d",a,b);
	return 0;
}
