#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char const *argv[])
{
    int n, min, max;

    scanf("%d", &n);
    int arr[n];

    for (int j = 0; j < n; j++)
        std::cin >> arr[j];

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d %d", min, max);

    return 0;
}