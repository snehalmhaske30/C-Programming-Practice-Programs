#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=5,b=7,c;
	c= a++ - b--;
	printf("\n\t Enter the value of a:");
	scanf("%d",&a);
	printf("\n\t Enter the value of b:");
	scanf("%d",&b);
	printf("\n\t c=a++ - b--: a=%d b=%d c=%d",a,b,c);
	c=++a + ++b;
	printf("\n\t c= a-- - --b: a=%d b=%d c=%d", a,b,c);
	c=a-- - --b;
	return 0;
}
