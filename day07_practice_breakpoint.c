#include <stdio.h>

int main(void)
{
    int nums[4] = {2, 7, 11, 15};
    int target = 9;

    //第一个循环，找第一个数字
    for (int i = 0; i < 4; i++)
    {
        //第二个循环，找第二个数字
        for (int j = i + 1; j < 4; j++)
    {
        // 12行，第一个断点
        //设置的方式就是在最左边点一下红点
        printf("Checking: i = %d, j = %d\n", i, j);

        //第二个断点在下面if这一行设置
        //看两个数字相加是否等于target
        if (nums[i] + nums[j] == target)
        //为什么if 这段话⬆️没有; 是因为
        //是为了让后面的代码块受到 if 条件控制。

        {
            //第三个断点，在结果处设置断点
            //只有能得到正确答案的时候，程序才能执行到这里
            printf("Found: [%d, %d]\n", i, j);

            return 0;
        }

    }
    }
    

}