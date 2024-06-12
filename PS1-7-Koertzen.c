#include <stdio.h>
#include <math.h>
int main(void)
{
    int j,N,p,q;
    long int fact;
    double x,sum;
    printf("Enter N \n");
    printf("\n");
    scanf("%i",&N);
    printf("Enter x\n");
    scanf("%lf",&x);
    sum = 1.;
    fact = 1.;
    for (j=1; j<N; j=j+1)
    {
        p = j%2;
        fact = fact*(j);
        if (p==0)
        {
            q = j/2;
            sum = sum + (pow(-1,q)*pow(x,j)) / fact;
            printf("\n j: %i answer:%lf",j,sum);
        }
    }
}

