#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x,y,M,C,D,N=100000000;
    int i;
    unsigned int seed=12345;
    FILE*fileout;
    fileout=fopen("PS5-7.txt","w");
    srand(seed);
    fprintf(fileout,"\nx: y: \n");
    for(i=0;i<N;i=i+1)
    {
        x=(double)rand()/RAND_MAX;
        y=(double)rand()/RAND_MAX;
        C = x*x + y*y;
        if (C<1)
        {
            M += 1;
        }
        //fprintf(fileout,"%12.8lf %12.8lf \n",x,y);
    }
    D = M/N;
    printf("\nM/N: %lf",D);
    printf("\n");
}