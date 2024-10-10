#include <stdio.h>
/*The program prompts the user to enter the starting and 
ending values of the loop and create the list using the while loop.
The sum of the list is also generated.*/

int main(){

    int start, stop, sum;

    //User Input
    printf("Enter your starting value of the loop: ");
    scanf("%d", &start);
    printf("Enter your ending value of the loop: ");
    scanf("%d", &stop);

    int i = start;//start
    
    //While loop
    printf("Your list is: \n");
    while (i <= stop)//stop
    {
        printf("%d \n", i);
        i++;//step
        sum = sum + i;//sum
    }
    printf("The sum of the list is:%d \n", sum);
    return 0;
}