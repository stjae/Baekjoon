#include <iostream>

int main(int argc, char const *argv[])
{
    int m, n;
    std::cin >> m;
    std::cin >> n;
    int min = 0;
    int sum = 0;
    bool isFirst = true;

    for (int i = m; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (j < i && i % j == 0)
            {
                break;
            }
            else if (j == i)
            {
                if (isFirst == true)
                {
                    min = i;
                    isFirst = false;
                }
                sum += i;
                break;
            }
        }
    }

    !isFirst ? std::cout << sum << '\n'
                         << min
             : std::cout << -1;

    return 0;
}