#include <stdio.h>
/*Since we are using the pow() function the math.h library has to be included.*/
#include <math.h>
/*The program is about calculating the compound interest from the user input*/

int main(){
    /*Formula for calculating annual compound interest: ci = p * (1+r/100)t*/
    //Familiarize the variables and their data type
    int p, t;
    float r, ci;

    //principle user input
    printf("Enter principle amount:");
    scanf("%d", &p);

    //Rate user input
    printf("Enter the annual rate of interest:");
    scanf("%f", &r);

    //Time user input
    printf("Enter the period of time:");
    scanf("%d", &t);

    //Calculating the compound interest
    ci = p * pow((1+r/100), t);
    //Showing the output; compound interest
    printf("\n");
    printf("The Annual Compound interest is %f\n", ci);

    return 0;
}