//Author: Vincent Gichuki
/*The progran below create a structure called Book with fields of different data types.
The assigned variable is the used to print out value of each field*/

# include <stdio.h>

//The line below include all the string handling functions.
#include <string.h>
//Structure Book
struct Book
{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1;

int main(){

    //Giving values to each field
    strcpy(book1.title, "Art Of War");
    strcpy(book1.author, "Sun Tzu");
    strcpy(book1.ISBN, "BE101/GRT");
    book1.publication_year = 1901;
    book1.price = 450.00;

    //Printing out the values
    printf("Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Publication Year: %d \n", book1.publication_year);
    printf("Price: %f \n", book1.price);

    return 0;
}