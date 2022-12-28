#include <stdio.h>

int main()
{
    int i = 10;  

    if ((i & (i - 1)) == 0)
    {
        printf("%d 是 2 的冪次方。\n", i);
    }
    else
    {
        printf("%d 不是 2 的冪次方。\n", i);
    }

    return 0;
}
