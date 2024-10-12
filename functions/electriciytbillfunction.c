/*Programmer: Vincent Gichuki
The program is about calculating the electricity Bill inclusive of a function*/

#include <stdio.h>

//Declaration of the function electricitybill().
int electricitybill(float UnitConsumed);

int main(){

    char  CustomerName[50];
    int CustomerID;
    float UnitConsumed, total;

    //User Input
    printf("Please enter your Customer Name:");
    fgets(CustomerName, sizeof(CustomerName), stdin);

    printf("Please enter your CustomerID:");
    scanf("%d", &CustomerID);

    printf("Please enter unit consumed:");
    scanf("%f", &UnitConsumed);

    //Calling the function
    total = electricitybill(UnitConsumed);

    //Display the output information to the user.
    printf("\n");
    printf("CUSTOMER NAME: %s", CustomerName);
    printf("CUSTOMER ID: %d \n", CustomerID);
    printf("UNIT CONSUMED: %f \n", UnitConsumed);
    printf("TOTAL AMOUNT TO PAY: %f \n", total);

    return 0;
}

//The function is to determine the charges as per the units consumed and calculate the total bill.
int electricitybill(float UnitConsumed){
    //Conditions
    float chargesperUnit, totalBill;
    if (UnitConsumed>= 0 && UnitConsumed<=199)
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

    //Calculation of the total bill.
    totalBill = chargesperUnit*UnitConsumed;
    
    return totalBill;
}