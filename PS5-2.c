#include <stdio.h>
#include <math.h>

int main()
{
    int Nx=1000,Nt=100000,it,ix,i;
    double rho[1000],rhonew[1000],dt=0.0001,dx=0.01,D=0.02,a,sum;
    FILE*fileout;
    fileout=fopen("PS5-2.txt","w");
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
    for (it=1;it<Nt+1;it++)
    {
        sum = 0;
        if (it == 100000)
        {
            fprintf(fileout,"\n Time step %i:  \n",it);
        }
        //fprintf(fileout,"\n Time step %i:  \n",it);
        for (ix=1;ix<Nx+1;ix++)
        {
            rhonew[ix] = rho[ix] +a*(rho[ix+1]-2*rho[ix]+rho[ix-1]);
            sum = sum + rhonew[ix];
            if (it==100000)
            {
                fprintf(fileout,"\n %i %lf",ix,rhonew[ix]);
            }
            //fprintf(fileout," %lf",rhonew[ix]);
        }
        for (ix=1;ix<Nx+1;ix++)
        {
            rho[ix]=rhonew[ix];
        }
        //fprintf(fileout,"\n");
        //for (ix=1;ix<Nx+1;ix++)
        //{
            //fprintf(fileout," %i",ix);
        //}
        //fprintf(fileout,"\n");
        //fprintf(fileout,"\nSum: %lf\n",sum);
    }
}