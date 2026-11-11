#include <stdio.h>

int main(void)
{
    int nums[3] = {3, 2, 4};
    int target = 6;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            // 【断点位置】
            // 在下面 if 这一行左侧点击，设置红色断点
            if (nums[i] + nums[j] == target)
            {
                printf("Found: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found.\n");

    return 0;
}