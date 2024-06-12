#include <stdio.h>
#include <math.h>
double myfunction();

int main(void)
{
    int j,N;
    double A,B,x1,x2,dx,f1,f2,integral=0;
    printf("Enter A, B, and N \n");
    scanf("%lf %lf %i",&A,&B,&N);
    dx = (B-A)/N;
    for(j=0; j<N; j=j+1)
    {
        x1=A+j*dx;
        x2=x1+dx;
        f1 = myfunction(x1);
        f2 = myfunction(x2);
        integral = integral + 0.5*(f1 + f2)*dx;
    }
    printf("Integral: %lf   \n",integral);
}


double myfunction(double x)
{
    double fofx;
    fofx = (pow(x,0.34)*exp(0.25*x)*sin(x)) / (2.2 + 0.9*sqrt(x));
    return fofx;
}
