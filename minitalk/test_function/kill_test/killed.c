#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i;

    i = 5;
    printf("Count down START!\n");
    while (i >= 0)
    {
        printf("%dsec\n", i);
        sleep(3);
        i--;
    }
    return (0);
}