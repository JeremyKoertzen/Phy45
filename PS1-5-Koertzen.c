#include <stdio.h>
#include <math.h>
int main()
{
    double a,sum;
    int j,N;
    printf("\nEnter a\n");
    scanf("%lf",&a);
    printf("\nEnter N\n");
    scanf("%i",&N);
    printf("    j            sum     ");
    sum=0.;
    for (j=0; j<N; j=j+1)
    {
        sum=sum+pow(a,j);
        printf("\n   %i   %12.6lf ",j,sum);
    }
}
//FOR a=0.3:
//j values:0,1,2,3,4,5,6,7,8,9
//sums:1,1.3,1.39,1.417,1.4251,1.427553,
//1.428259,1.428478,1.428543,1.428563.

//FOR a=0.8:
//j vales:0,1,2,3,4,5,6,7,8,9
//sums:1,1.8,2.44,2.952,3.3616,3.68928,3.951424,
//4.161139,4.328911,4.463129.

//To calculate the theoretical number, I used the
//formula sum = (1-a^N)/(1-a) for geometric series.

//For a=0.3, the theoretical answer is about1.428562993, 
//which matches the code up to the last decimal place. 
//The theoretical anser for a=0.8 is 4.463129088, which 
//also matches within precision.