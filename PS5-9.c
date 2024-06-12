#include <stdio.h>
#include <math.h>
double myfunction();

int main()
{
    int i,N=10;
    double x,dx,A,B,deriv;
    printf("Enter x and dx \n");
    scanf("%lf %lf",&x,&dx);
    for(i=0;i<N;i++)
    {
        A=myfunction(x);
        B=myfunction(x+dx);
        deriv=(B-A)/dx;
        x = x - (A/deriv);
        printf("\n Root: %lf \n",x);
    }
}

double myfunction(double x)
{
    double fofx;
    //fofx = sin(x);
    //fofx = cos(x);
    fofx = log10(x);
    return fofx;
}

