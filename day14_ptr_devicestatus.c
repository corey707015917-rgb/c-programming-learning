#include <stdio.h>

struct DeviceStatus
{
    int id;
    float temperature;
    int is_on;
};

//device是指向DeviceStatus 结构体的指针
void updateDevice(struct DeviceStatus *device,
                    float new_temperature,
                    int new_status)

{
    device->temperature = new_temperature;
    device->temperature = new_status;
}

int main(void)
{
    struct DeviceStatus device = {1, 25.5f, 1};

    printf("=== 更新前 ===\n");
    printf("device_id: %d\n", device.id);
    printf("temperature: %1.f C\n", device.temperature);
    printf("device status: %s\n", device.is_on ? "ON" : "OFF");

    // &device 取得 device 的地址，传给函数
    updateDevice(&device, 28.5f, 0);

    printf("\n=== 更新后 ===\n");
    printf("device_id: %d\n", device.id);
    printf("temperature: %1.f C\n", device.temperature);
    printf("device status: %s\n", device.is_on ? "ON" : "OFF");

    return 0;

}