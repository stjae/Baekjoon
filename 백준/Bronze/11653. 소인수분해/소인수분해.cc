#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int count = 0;
    int tmp = 0;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            std::cout << i << '\n';
            tmp = n / i;
            n /= i;
            count++;
        }
    }

    if (count == 1 && tmp > 1)
        std::cout << tmp;

    return 0;
}