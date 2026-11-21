#include <stdio.h>

struct DeviceStatus
{
    int id;
    float temperature;
    int is_on;
};

void updateDevice(struct DeviceStatus *device)
{
    device->temperature = 28.5f;
    device->is_on = 0;
}

int main(void)
{
    struct DeviceStatus device1 = {1, 25.5f, 1};
    //25.5后面的f 表示这是一个 float 类型的浮点数。
    //如果你直接写 25.5，C 语言默认将它识别为 double，而不是 float

    updateDevice(&device1);

    printf("Temperature: %.1f C\n", device1.temperature);
    printf("Device status: %s\n", 
            device1.is_on ? "ON" : "OFF");

    return 0;
}
