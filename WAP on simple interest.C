/* program: WAP to find simple interest
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
float p,n,r,si;
system("cls");
printf("\n\t Enter the principal in rupees");
scanf("%f",& p);
printf("\n\t Enter the tenure in years");
scanf("%f",& n);
printf("\n\t Enter the rate of interest in %");
scanf("%f,& r");
si=(p*n*r)/100;
printf("Simple interest= %f",si);
return 0;
}

