#include<stdio.h>
#include<stdlib.h>

int toCelsius(float f)
{
    float cel = 0.0;
    cel = (f - 32) * 5 / 9;
    return cel;
}

int main()
{
    float far = 0.0, cRet = 0.0;
    puts("Enter the temperature in Fahrenheit");
    scanf("%f", &far);
    cRet = toCelsius(far);
    printf("Temperature in Celsius is : %f\n", cRet);
    return EXIT_SUCCESS;
}