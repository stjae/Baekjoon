#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
        printf("%d\n", n - (i - 1));
    return 0;
}