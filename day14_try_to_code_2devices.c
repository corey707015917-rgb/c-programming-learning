#include <stdio.h>

struct DeviceStatus
{
    int id;
    float temperature;
    int is_on;
};

int main(void)
{
    struct DeviceStatus device1 = {1, 25.5f, 1};
    struct DeviceStatus device2 = {2, 30.0f, 0};

    printf("=== Before Update ===\n");

    printf("Device %d | %.1f C | %s\n",
            device1.id,
            device1.temperature,
            device1.is_on ? "ON" : "OFF");

    printf("Device %d | %.1f C | %s\n",
            device2.id,
            device2.temperature,
            device2.is_on ? "ON" : "OFF");

    device1.temperature = 28.5f;
    device1.is_on = 0;


    printf("\n=== After Update ===\n");

    printf("Device %d | %.1f C | %s\n",
            device1.id,
            device1.temperature,
            device1.is_on ? "ON" : "OFF");

    return 0;
    

}