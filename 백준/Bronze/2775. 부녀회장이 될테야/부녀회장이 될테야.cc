#include <iostream>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k = 0;
        int n = 0;
        std::cin >> k;
        std::cin >> n;

        int arr[14] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
        int sum[14] = { 1 };

        for (int l = 0; l < k; l++)
        {
            for (int i = 2; i < n + 1; i++)
            {
                int tmp = 0;
                for (int j = 0; j < i; j++)
                {
                    tmp += arr[j];
                }
                sum[i - 1] = tmp;
            }

            for (int i = 0; i < n; i++)
            {
                arr[i] = sum[i];
            }
        }

        std::cout << arr[n - 1] << '\n';
    }

    return 0;
}
