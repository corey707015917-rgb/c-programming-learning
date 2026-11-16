#include <stdio.h>

//定义函数：通过指针修改温度
void changeTemperature(int *ptr)

{
    printf("Inside brfore: %d\n", *ptr);

    //通过指针修改原变量
    *ptr = 80;

    printf("Inside after: %d\n", *ptr);
}

int main(void)
{
    //创建一个整数变量
    int temperature = 25;

    //第一次输出变量
    printf("Before function: %d\n", temperature);

    //调用函数，传递temperature的地址
    changeTemperature(&temperature);

    //再次输出变量
    printf("After function: %d\n", temperature);

    return 0;
}