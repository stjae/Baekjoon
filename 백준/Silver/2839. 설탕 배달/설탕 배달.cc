#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    int x = 0;
    int y = 0;

    int amount = 0;
    int prev = 0;

    while (3 * x + 5 * y <= n)
    {
        if ((n - 5 * y) % 3 == 0)
        {
            int result = (n - 5 * y) / 3 + y;
            if (prev > result || prev == 0)
                amount = result;
            prev = result;
        }
        y++;
    }

    amount != 0 ? std::cout << amount : std::cout << -1;

    return 0;
}