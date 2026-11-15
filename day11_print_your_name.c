#include <stdio.h>

int main(void)
{
    char name[20];

    printf("Enter your name: ");

    if(fgets(name, sizeof(name), stdin) != NULL)
    {
        printf("Your name: %s", name);
    }

    return 0;
}