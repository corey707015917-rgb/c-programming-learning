/*
getchar() 是 C 语言中的一个标准库函数，
意思是 读取一个字符（Get a Character）。
*/
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character: ");

    ch = getchar();

    printf("You entered: %c\n", ch);

    return 0;
}