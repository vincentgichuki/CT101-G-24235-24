#include <stdio.h>

/*The program allow the user to prompt the start of the loop and the end of the loop and 
generate a list together with the sum of all the values in the list.*/

int main(){

    int start, stop, sum;

    //User Input
    printf("Enter your starting value of the loop: ");
    scanf("%d", &start);

    printf("Enter your ending value of the loop: ");
    scanf("%d", &stop);

    //For loop
    printf("Your list is: \n");

    for ( int i = start; i <= stop; i++)
    {
        printf("%d \n", i);

        //Sum
        sum = sum + i;
    }
    
    //Output of the sum of the list.
    printf("The sum of your list is: %d \n", sum);
    return 0;
}