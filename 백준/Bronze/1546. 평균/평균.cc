#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    float max = 0.0f, sum = 0.0f;
    std::cin >> n;
    float arr[n];

    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    for (int j = 0; j < n; j++)
        if (arr[j] > max)
            max = arr[j];

    for (int k = 0; k < n; k++)
        arr[k] = (arr[k] / max) * 100;

    for (int l = 0; l < n; l++)
        sum += arr[l];

    std::cout << sum / n << std::endl;

    return 0;
}