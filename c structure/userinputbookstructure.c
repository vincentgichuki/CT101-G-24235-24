//Author: Vincent Mahia
/*The program below create a structure called Book and includes field of differnt data types.
The user is then prompt to input his own values in each field and the values are printed out*/
#include <stdio.h>
//structure Book
struct Book
{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1;

int main(){

    //User Input
    printf("Enter the title of the book: \n");
    scanf("%s", &book1.title);

    printf("Enter the author of the book: \n");
    scanf("%s", &book1.author);

    printf("Enter the ISBN of the book: \n");
    scanf("%s", &book1.ISBN);

    printf("Enter the publication year of the book: \n");
    scanf("%d", &book1.publication_year);

    printf("Enter the price of the book: \n");
    scanf("%f", &book1.price);

    //Printing out the values
    printf("\n");
    printf("Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Publication Year: %d \n", book1.publication_year);
    printf("Price: %f \n", book1.price);

    return 0;
}