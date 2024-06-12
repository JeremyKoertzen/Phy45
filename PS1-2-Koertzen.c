#include <stdio.h>
#include <math.h>
int main(void)
{
    int x,y;
    printf("\nEnter a number \n");
    scanf("%i",&x);
    y = x%2;
    if (y==0) {
        printf("\nThe number is even \n");
    }
    if (y!=0) {
        printf("\nThe number is odd \n");
    }
    printf("\n");
    return 0;
}