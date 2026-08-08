/* program: find the area of circle
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float A,r;
	system ("cls");

	printf("\n\t Enter the radius of circle in cm:");
	scanf("%f",&r);
	A= 3.14*r*r;
	printf("\n\t Area of circle= %f sq.cm",A);
	return 0;
}
