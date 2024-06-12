#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,root1,root2;
    printf(" Please enter a,b, and c/n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if (b*b-4.*a*c>0)
    {
        root1 = (-b + sqrt(b*b-4.*a*c)) / (2.*a);
        root2 = (-b - sqrt(b*b-4.*a*c)) / (2.*a);
        printf("\n First root is %lf ",root1);
        printf("\n Second root is %lf",root2);
    }
    if (b*b-4.*a*c<0)
    {
        root1 = -b / (2*a);
        root2 = sqrt(4.*a*c - b*b);
        printf("\n First root is %lf+i%lf",root1,root2);
        printf("\n Second root is %lf-i%lf",root1,root2);
    }
    if (b*b-4.*a*c == 0)
    {
        root1 = (-b) / (2.*a);
        printf("\n The root is %lf ",root1);
    }
    printf("\n");
}

//The three cases for the quadratic equation are a positive
//number in the square root, a negative, or 0. If it is 
//positive, the parabola crosses the x-axis two times. If the 
//b^2 - 4ac value is negative, then the parabola has no real 
//roots and does not cross the x-axis. If the value is zero, then
//the apex of the parabola touches the x-axis, so there is only
//one solution.