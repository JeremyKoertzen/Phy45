#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    double R,N,position=0;
    unsigned int seed;
    FILE*fileout;
    fileout=fopen("PS5-5.txt","w");
    printf("\nEnter number of iterations and seed");
    printf("\n");
    scanf("%lf %u",&N,&seed);
    srand(seed);
    fprintf(fileout,"\nSeed: %u",seed);
    fprintf(fileout,"\nStep:  Position: ");
    for(i=1;i<N+1;i=i+1)
    {
        R=(double)rand()/RAND_MAX;
        if (R>0.5)
        {
          position += 1;
        }
        else
        {
          position -= 1;
        }
        fprintf(fileout,"\n%i %lf",i,position);
    }
    printf("\n");
}

