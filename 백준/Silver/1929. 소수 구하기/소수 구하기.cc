#include <iostream>

int main(int argc, char const *argv[])
{
    int m, n;
    std::cin >> m >> n;

    bool flag[n - m + 1];
    int min = m;
    int max = n;
    int amount = max - min;

    for (int i = 0; i <= amount; i++)
        flag[i] = true;

    for (int i = 0; i <= amount; i++)
    {
        if (flag[i])
        {
            if (m == 1)
                flag[i] = false;

            int j = 2;
            while (j * j <= max)
            {
                if (j < m && m % j == 0)
                {
                    flag[m - min] = false;
                    break;
                }
                else if (j == m)
                {
                    int count = m;
                    while (m * count < n)
                    {
                        flag[m * count - min] = false;
                        count++;
                    }
                    break;
                }
                j++;
            }
        }
        m++;
    }

    for (int i = 0; i <= amount; i++)
    {
        if (flag[i])
            std::cout << min + i << '\n';
    }

    return 0;
}