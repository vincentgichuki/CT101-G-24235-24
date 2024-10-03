#include <stdio.h>

int main()
{
    int age, income;

    printf("Please Enter your age:");
    scanf("%d", &age);
    printf("Please Enter your annual income:");
    scanf("%d", &income);

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

