#include <stdio.h>
#include <math.h>
int main()
{
    int sum=0;
    int j, N;
    printf("Enter N");
    printf("\n");
    scanf("%i",&N);
    for (j=0; j<N+1; j=j+1)
    {
        sum=sum+j;
    }
    printf("the sum is %30i \n",sum);
}

//Using the formula (n/2)*(2+(n-1)), the theoretical
//value when N = 10 is 55, which matches the output
//of the code.

//The theoretical value of the sum is 1800030000, which
//matches the output of the code.

//The theoretical value of the sum is 2147450880, which
//matches the output of the code.

//The output of the code is -2147450880, which obviously
//does not match the theoretical value. The reason this
//happens is because the value would have been too large 
//to store, so the computer could not provide an accurate
//value. 