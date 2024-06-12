#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x,y;
    int i,N=10000;
    unsigned int seed=12345;
    FILE*fileout;
    fileout=fopen("PS5-7.txt","w");
    srand(seed);
    fprintf(fileout,"\nx: y: \n");
    for(i=0;i<N;i=i+1)
    {
        x=(double)rand()/RAND_MAX;
        y=(double)rand()/RAND_MAX;
        fprintf(fileout,"%12.8lf %12.8lf \n",x,y);
    }
    printf("\n");
}