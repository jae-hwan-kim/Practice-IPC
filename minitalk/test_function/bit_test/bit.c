#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int     index;
    int     bit;
    int    value;
    int    key;

    index = 0;
    while (0 != av[1][index])
    {
        bit = 7;
        while (0 <= bit)
        {
            key = av[1][index] >> bit;
            printf("\nkey = %d\n", key);
            printf("\nkey & 1 = %d\n", key & 1);
            // if ((key & 1) == 0)
            // {
            //     value = '0';
            //     write(1, &value, 1);
            // }
            // else if ((key & 1) == 1)
            // {
            //     value = '1';
            //     write(1, &value, 1);
            // }
            bit--;
        }
        printf("\n");
        index++;
    }
    return (0);
}