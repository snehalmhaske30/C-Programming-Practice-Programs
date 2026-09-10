/* program: WAP to find area of triangle
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float A,b,h;
	system ("cls");
	printf("\n\t Base of a triangle in cm:");
	scanf("%f", & b);
	printf("\n\t Height of a triangle in cm:");
	scanf("%f",& h);
	A= 0.5*b*h;
	printf("\n\t Area of triangle= %f sq.cm",A);
	return 0;
}
