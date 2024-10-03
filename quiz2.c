#include <stdio.h>

int main(){
    int bookID, dueDate, returnDate, daysOverdue, fineAmount, fineRate;
    //Book ID user input
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);

    //Due Date user input
    printf("Enter the Due Date: ");
    scanf("%d", &dueDate);

    //Return Date user input
    printf("Enter the Return Date: ");
    scanf("%d", &returnDate);

    //Calculation of days overdue.
    daysOverdue = returnDate - dueDate;

    //Condition for getting the fine amount
    if (daysOverdue<=7)
    {
        fineRate = 20;
        fineAmount = daysOverdue*fineRate;
        printf("Your fine amount is: %d",fineAmount);
    }
    
    else if (daysOverdue<=14)
    {   
        fineRate = 50;
        fineAmount = daysOverdue*fineRate;
        printf("Your fine amount is: %d",fineAmount);
    }
    else if (daysOverdue>=15)
    {   
        fineRate = 100;
        fineAmount = daysOverdue*fineRate;
        printf("Your fine amount is: %d",fineAmount);
    }
    else
    {   
        fineRate = 0;
        fineAmount = 0;
    }

    return 0;
}