#include <stdio.h>
#include <math.h>

int main(){
    int p, t;
    float r, si, a;

    printf("Enter the principle amount: ");
    scanf("%d", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the period of time: ");
    scanf("%d", &t);

    si = (p*r*t)/100;
    a = p + si;
    printf("Your simple interest is %f", si);
    printf("\n");
    printf("Hence the total amount will be %f", a);
}