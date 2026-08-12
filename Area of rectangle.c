/* program: wap to find the area of rectangle
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
float A,l,b;
system("cls");
printf("\n\t Length of rectangle in cm:");
scanf(" %f",& l);
printf("\n\t Breadth of rectangle in cm :");
scanf("%f",& b);
A = l*b;
printf("\n\t Area of rectangle=%f sq.cm",A);
return 0;
}
