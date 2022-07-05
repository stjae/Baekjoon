#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, count;
    scanf("%d", &count);
    for (int i = 1; i < count + 1; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }

    return 0;
}