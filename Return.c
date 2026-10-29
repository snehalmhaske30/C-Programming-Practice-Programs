#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=10,y=20;
	int res;
	res=add (x,y);
	printf("\n\t Addition=%d",res);
	
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
