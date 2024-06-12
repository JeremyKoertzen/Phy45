#include <stdio.h>
#include <math.h>

int main()
{
    double x,v,k,m,dt,a,t=0;
    int i,N;
    FILE * fileout;
    fileout=fopen("Geidt.txt","w");
    printf("\nEnter initial x,v   \n");
    scanf("%lf %lf",&x,&v);
    printf("\nEnter k,m,dt,N   ");
    scanf("%lf %lf %lf %i",&k,&m,&dt,&N);
    for (i=1; i<N+1; i=i+1)
    {
        x=x+v*dt;
        a=-k*x/m;
        v=v+a*dt;
        t=t+dt;
        fprintf(fileout,"%12.6lf %12.6lf %12.6lf",t,x,v);
    }
    fclose(fileout);
}
