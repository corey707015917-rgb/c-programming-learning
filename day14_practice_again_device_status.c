#include <stdio.h>

struct DeviceStatus
{
    int id;
    float temperature;
    int is_on;
};

int main(void)
{
    struct DeviceStatus device = {1, 25.5f, 1};

    printf("Device ID: %d\n", device.id);
    printf("Temperature: %.1f C\n", device.temperature);
    printf("Status: %s\n", device.is_on ? "ON" : "OFF");

    return 0;
}