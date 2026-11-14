#include <stdio.h>

void changeTemperature(int *ptr)
{
    *ptr = 80;
}

int main(void)
{
    int temperature = 25;

    changeTemperature(&temperature);

    printf("%d\n", temperature);

    return 0;


}