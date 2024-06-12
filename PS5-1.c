#include <stdio.h>
#include <math.h>

int main()
{
    int Nx=1000,Nt=10,it,ix,i;
    double rho[1000],rhonew[1000],dt=0.1,dx=1,D=1,a,sum;
    FILE*fileout;
    fileout=fopen("diffusionPS5.txt","w");
    a = (D*dt)/(dx*dx);
    for (i=0;i<Nx;i++)
    {
        if(i!=500)
        {
            rho[i]=0;
        }
        if(i==500)
        {
            rho[i]=1;
        }
    }
    //fprintf(fileout,"\n Time step %i:  \n",it);
    for (it=0;it<Nt;it++)
    {
        sum = 0;
        fprintf(fileout,"\n Time step %i:  \n",it);
        for (ix=1;ix<Nx-1;ix++)
            {
                rhonew[ix] = rho[ix] +a*(rho[ix+1]-2*rho[ix]+rho[ix-1]);
                sum = sum + rhonew[ix];
                fprintf(fileout,"\n %i: %lf\n",ix,rhonew[ix]);
            }
        for (ix=1;ix<Nx-1;ix++)
            {
                rho[ix]=rhonew[ix];
            }
        fprintf(fileout,"\nSum: %lf\n",sum);
    }
}