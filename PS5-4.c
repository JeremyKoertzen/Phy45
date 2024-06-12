#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    double R,N,r[1000000],moment[6];
    unsigned int seed;
    printf("\nEnter number of iterations and seed");
    printf("\n");
    scanf("%lf %u",&N,&seed);
    srand(seed);
    for(i=0;i<N+1;i=i+1)
    {
        R=(double)rand()/RAND_MAX;
        r[i] = R;
        //printf("R: %12.8lf r[%i]: %lf \n",R,i,r[i]);
    }
    printf("\n");


        for(j=1;j<7;j++)
        {
            moment[j] = 0.0;
          for(k=0;k<N;k++)
            {
              moment[j] = moment[j] + pow(r[k],j)/N;
            }
            printf("\nMoment %i: %lf\n",j,moment[j]);
        }
}
