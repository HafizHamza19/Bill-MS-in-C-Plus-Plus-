#include <iostream>;
#include <conio.h>
using namespace std;
void main()
{
int con;
printf("Enter Consumption : ");
scanf("%d",&con);
if (con>=0 && con<=200)
{
	printf ("Per Unite Charges = 0.50");
	con=con*0.50;
printf("\nThe Amount To be Paid By Costumer Is : %d",con);
}
if (con>=201 && con<=400)
{
	printf ("Per Unite Charges = 0.85");
	con=con*0.85;
printf("\nThe Amount To be Paid By Costumer Is : %d",con);
}
if (con>=401 && con<=600)
{
	printf ("Per Unite Charges = 1.5");
	con=con*1.5;
printf("\nThe Amount To be Paid By Costumer Is : %d",con);
}
getch();
}