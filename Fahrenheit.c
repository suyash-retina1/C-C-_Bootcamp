#include<stdio.h>
#include<stdlib.h>

int toCelsius(float c)
{
    float far = 0.0;
    far = (c * 9 / 5) + 32;
    return far;
}

int main()
{
    float cel = 0.0, fRet = 0.0;
    puts("Enter the temperature in Celsius");
    scanf("%f", &cel);
    fRet = toCelsius(cel);
    printf("Temperature in Fahrenheit is : %f\n", fRet);
    return EXIT_SUCCESS;
}