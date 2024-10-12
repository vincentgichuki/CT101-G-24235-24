#include <stdio.h>
//Vincent Gichuki.
//The program is for 2D array.

int main(){
    int i, j;
    //Declare an array alphabets
    char alphabets[2][3]= {{'a','b','c'}, {'d','e','f'}};

    //For loop
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("The Alphabet[%d][%d] is: %c \n", i, j, alphabets[i][j]);
        }
        
    }

    return 0;
}