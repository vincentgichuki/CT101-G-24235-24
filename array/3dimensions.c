#include <stdio.h>
//Vincent Gichuki
//The programis for 3D array

int main(){
    //Declare array alphabets
    int i, j, k;
    char alphabets[2][2][3] = {{{'a','b','c'}, {'d','e','f'}},{{'g','h','i'}, {'j','k','l'}}};

    //For loop
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                printf("The Alphabet[%d][%d][%d] is: %c \n", i, j, k, alphabets[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}