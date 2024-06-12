#include <stdio.h>
#include <math.h>
double myfunction();

int main()
{
    int i,N=10;
    double x1,x2,x3,A,B,C,D,E;
    printf("Enter x1 and x2 \n");
    scanf("%lf %lf",&x1,&x2);
    for(i=0;i<N;i++)
    {
        A = myfunction(x1);
        B = myfunction(x2);
        x3 = (x1 + x2)/2;
        C = myfunction(x3);
        D = C*A;
        E = C*B;
        if(D>0)
        {
            x1 = x3;
        }
        if(E>0)
        {
            x2 = x3;
        }
        printf("\n Root: %lf \n",x3);
    }
}

double myfunction(double x)
{
    double fofx;
    //fofx = sin(x);
    fofx = cos(x);
    //fofx = log10(x);
    return fofx;
}