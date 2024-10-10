#include <stdio.h>
/*The program prompts the user to enter the starting and 
ending values of the loop and create the list using the do while loop.
The sum of the list is also generated.*/

int main(){
    int start, stop, sum;
    //User Input
    printf("Enter your starting value of the loop: ");
    scanf("%d", &start);
    printf("Enter your ending value of the loop: ");
    scanf("%d", &stop);

    //Do loop
    int i = start;//start

    printf("Your list is: \n");
    do
    {
        printf("%d \n", i);
        i++;//step
        sum = sum + i;//sum

    } while (i<=stop);//stop

    //Output the sum of the list
    printf("The sum of the list is:");
    printf("%d", sum);

    return 0;
}