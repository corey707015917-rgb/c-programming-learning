/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
 这个代码写错了 参考gpt给的东西 再写一遍
 https://chatgpt.com/s/t_6af1cc4b88ac8191bfec187611c6954d
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int main(void)
    printf = (num1 + num2 = target)
    {
        int num1, num2;
        int l1 = (%d3, %d2, %d1);
        int l2 = (%d6, %d5, %d4);
        num1 = 100 * %d1 + 10 * %d2 + %d3;
        num2 = 100 * %d6 + 10 * %d5 + %d4;

        return 0;
    }
}
*/
//先按照原先的思路写完这个代码
#include <stdio.h>

int main(void)
{
    int l1[3] = {2, 4, 3};
    int l2[3] = {5, 6, 4};

    int num1, num2, target;

    num1 = 100 * l1[2] + 10 * l1 [1] + l1[0];
    num2 = 100 * l2[2] + 10 * l2 [1] + l2[0];

    target = num1 +num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    /*

    不可以直接写成：
printf("num2 = %d\n");
因为 %d 需要一个对应的整数参数。缺少参数时，会产生未定义行为，可能输出乱码。
这是一个字符串，用双引号包起来。
- num2 = ：普通文字，直接显示在屏幕上。
- %d：占位符，表示这里要显示一个整数。
- \n：换行符，让下一次输出从新的一行开始。
第二个nums
这里的 num2 才是你之前定义的变量。


    */
    printf("target = %d\n", target);

return 0;
}