#include <stdio.h>

int main(void)
{
    //创建一个整数变量
    int temperature = 25;

    //创建一个指针，保存tem的地址
    int *ptr = &temperature;

    //输出tem的值
    printf("Temprature: %d\n", temperature);

    //输出tem的内存地址
    printf("Address of tem: %p\n", (void*)&temperature);

    //输出ptr保存的地址
    printf("Pointer ptr:%p\n", (void*)ptr);

    //通过指针读取tem值
    printf("Value through pointer: %d\n", *ptr);

    //通过指针修改tem
    //理解指针不仅能读取变量，还能修改变量
    //在目前这个简单程序中，完全可以直接写 temperature = 80
    //我们使用指针只是为了学习它的工作原理
    *ptr=80;

    //再次查看变量和指针的值
    printf("New tempearture:%d\n", temperature);
    printf("New value through pointer: %d\n", *ptr);

    return 0;

}