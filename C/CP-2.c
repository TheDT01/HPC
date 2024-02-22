#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c,f;

    printf("Enter Centigrate Scale Temp:");
    scanf("%lf",&c);

    f=1.8*c+32;
    printf("\nFarhenhite Scale Temparature=%lf",f);
return 0;
}