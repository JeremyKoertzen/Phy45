#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,d,root1,root2;
    printf("\nEnter a \n");
    scanf("\n%lf",&a);
    printf("\nEnter b \n");
    scanf("/n%lf",&b);
    printf("\nEnter c \n");
    scanf("/n%lf",&c);
    d = b*b - 4*a*c;
    if(d>0){
        root1 = (-b + sqrt(b*b - 4.*a*c))/(2.*a);
        root2 = (-b - sqrt(b*b - 4.*a*c))/(2.*a);
        printf("\nRoot1: %lf \nRoot2: %lf",root1,root2);
        //printf("\nThere are no real roots.\n");
    }
    else{
       printf("There are not real roots!");
    }
    return 0;
}