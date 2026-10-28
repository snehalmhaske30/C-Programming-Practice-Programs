#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e;
	e=(a=10,b=5,c=19,d=8,a+b+c+d+e);
	printf("\n\t e=%d",e);
	e=(1,12,5);
	printf("\n\t e=%d",e);
	return 0;
}
