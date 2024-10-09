# include <stdio.h>

/*Electricity bill calculator.*/
int main(){

    char  CustomerName[50];
    int CustomerID;
    float UnitConsumed, totalBill, chargesperUnit;

    printf("Please enter your Customer Name:");
    fgets(CustomerName, sizeof(CustomerName), stdin);

    printf("Please enter your CustomerID:");
    scanf("%d", &CustomerID);


    printf("Please enter unit consumed:");
    scanf("%f", &UnitConsumed);

    //Conditional statement to determine the charges per unit.
    if (UnitConsumed<0)
    {
        //Any input that is less than 0 should display the following message.
        printf("You entered an invalid unit. Please try again. \n");
    }
    //Any input that is more than or equal to 0 should follow the below conditions.
    else
    {
        if (UnitConsumed>=0 && UnitConsumed<=199)
        {
            chargesperUnit = 1.20;
        }
        else if (200<=UnitConsumed && UnitConsumed<400)
        {
            chargesperUnit = 1.50;
        }
    
        else if (400<=UnitConsumed && UnitConsumed<600)
        {
            chargesperUnit = 1.80;
        }
        else
        {
            chargesperUnit = 2.00;
        }

         //Formula for calculating total bill
        totalBill = UnitConsumed * chargesperUnit;
    
        //Display the output information to the user.
        printf("\n");
        printf("CUSTOMER NAME: %s", CustomerName);
        printf("CUSTOMER ID: %d \n", CustomerID);
        printf("UNIT CONSUMED: %f \n", UnitConsumed);
        printf("CHARGES PER UNIT: %f \n", chargesperUnit);
        printf("TOTAL AMOUNT TO PAY: %f \n", totalBill);
    
        return 0;
    }
}
