#include <stdio.h>

int main()
{
    int age, income;
    
    //Age and annual income user input
    printf("Please Enter your age:");
    scanf("%d", &age);
    printf("Please Enter your annual income:");
    scanf("%d", &income);
    
    //conditional statement
    if (age>=21)
    {
        if (income>=21000)
        {
            printf("Congratulations you qualify for a loan.");
        }
        else
        {
            printf("Unfortunately, we are unable to offer you aloan at this time.");
        } 
        
    }
    else
        {
            printf("Unfortunately, we are unable to offer you aloan at this time.");
        }
}

