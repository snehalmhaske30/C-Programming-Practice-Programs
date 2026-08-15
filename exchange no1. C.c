/* program: WAP to  exchange two numbers using 3rd variable 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	system("cls");
	printf("\n\t Enter the value of a:");
	scanf("%d",&a);
	printf("\n\t Enter the value of b:");
	scanf("%d",& b);
	printf("\n\t Before exchange: a=&d b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n\t After exchange: a=%d b=%d",a,b);
	return 0;


}
