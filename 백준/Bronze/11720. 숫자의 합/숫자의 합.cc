#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m = 0, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &m);
        sum += m;
    }

    printf("%d", sum);

    return 0;
}