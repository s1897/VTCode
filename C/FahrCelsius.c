#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%6.2f\t%6.2f\n",fahr , celsius);
        fahr = fahr + step;
    }
    
}
