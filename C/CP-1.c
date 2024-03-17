#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum;
    float avg;

    printf("Enter first Number:");
    scanf("%d",&x);

    printf("Enter 2nd Number: ");
    scanf("%d",&y);

    sum= x-y;
    avg= sum/2;
    
    printf("sum=%d\n", sum);
    printf("Average=%f\n",avg);
return 0;
}