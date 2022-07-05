#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
        printf("%d\n", i);
    return 0;
}