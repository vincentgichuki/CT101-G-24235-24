#include <stdio.h>
//Vincent Gichuki
//The program is for 1D array

int main(){
    //Declare an array alphabets
    int i;
    char alphabets[5] = {'a','b', 'c', 'd', 'e'};

    //For loop
    for ( i = 0; i < 5; i++)
    {
        printf("Alphabet[%d] is: %c \n", i, alphabets[i]);
    }
    
    return 0;
}