#include <stdio.h>

int main()
{
    int customerID, units;
    char customerName[50];
    float charge,surcharge =0,totalAmount;

    printf("Enter customer ID: ");
    scanf("%d",&customerID);
    printf("Enter customer name: ");
    scanf("%s",customerName);
    printf("Enter units consumed: ");
    scanf("%d",&units);

    if (units<=199)
     {
        charge = units*1.20;
     }
    else if (units>=200 && units<400)
     {
        charge = units*1.50;
     }
     else if (units>=400 && units<600)
      {
        charge = units*1.80;
      }
    else
     {
        charge = units*2.00;
     }

    if (charge>400)          // Apply surcharge if bill exceeds Rs.400
    {
        surcharge = charge*0.15;
    }

    totalAmount = charge+surcharge;

    if (totalAmount<100)       // Ensure minimum bill of Rs. 100
     {
        totalAmount=100;
     }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: Rs.%.2f\n", totalAmount);

    return 0;
}
