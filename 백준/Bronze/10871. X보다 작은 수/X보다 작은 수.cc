#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int j : arr)
    {
        if (j < x)
            printf("%d ", j);
    }

    return 0;
}