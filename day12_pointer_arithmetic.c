#include <stdio.h>

//通过指针修改数组的第二个元素
void changeSecondElement(int *ptr)
{
    *(ptr + 1) = 80;
}

int main(void)
{
    //1.创建一个包含三个整数的数组
    int nums[3] = {10, 20, 30};

    //2.创建指针，指向数组的第一个元素
    int *ptr = nums;

    //3.直接使用数组下标读取元素
    printf("First element: %d\n", nums[0]);
    printf("Second element: %d\n", nums[1]);
    printf("Third element: %d\n", nums[2]);

    //4.通过指针读取数组元素
    printf("Pointer first: %d\n", *ptr);
    printf("Pointer second: %d\n", *(ptr+1));
    printf("Pointer third: %d\n", *(ptr+2));

    //5.调用函数，修改数组第二个元素
    changeSecondElement(nums);

    //6.检查数组修改后的结果
    printf("New first element: %d\n", nums[0]);
    printf("New second element: %d\n", nums[1]);
    printf("New third element: %d\n", nums[2]);

    return 0;
}