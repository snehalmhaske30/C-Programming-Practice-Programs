#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	system("cls");
	printf("\n\t Enter the value of a:");
	scanf("%d",&a);
	printf("\n\t Enter the value of b:");
	scanf("%d",&b);
	c=a+b;
	printf("\n\t c=a+b: a=%d b=%d c=%d",a,b,c);
	c=a-b;
	printf("\n\t c=a-b: a=%d b=%d c=%d" ,a,b,c);
	c=a*b;
	printf("\n\t c=a*b: a=%d b=%d c=%d" ,a,b,c);
	c=a/b;
	printf("\n\t c=a/b: a=%d b=%d c=%d" ,a,b,c);
	c=a%b;
	printf("\n\t c=a%b: a=%d b=%d c=%d" ,a,b,c);
	return 0;
}
