#include <stdio.h>

int main(void)
{
    float voltage;
    float current;
    float power;

    printf("Enter voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter current (A) ");
    scanf("%f", &current);

    power = voltage * current;

    printf("Power = %.2f W\n", power);

    return 0;
}