#include <iostream>

int main(int argc, char const *argv[])
{
    int n = 0;
    while (true)
    {
        std::cin >> n;

        if (n == 0)
            break;

        int amount = 2 * n - n + 1;
        int num = n;
        bool flag[amount];
        for (int i = 0; i < amount; i++)
        {
            if (n == 1)
            {
                flag[0] = false;
                flag[1] = true;
            }
            else
                flag[i] = true;
        }

        for (int i = 0; i < amount; i++)
        {
            if (flag[i])
            {
                for (int j = 2; j < num; j++)
                {
                    if (j > num / 2 || j * j > 2 * n)
                    {
                        break;
                    }

                    if (num / 2 >= j && num % j == 0)
                    {
                        flag[i] = false;
                        break;
                    }
                    else if (j == num)
                    {
                        int count = j;
                        while (j * count <= num)
                        {
                            flag[j * count - n] = false;
                            count++;
                        }
                    }
                }
                num++;
            }
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (flag[i])
                count++;
        }

        std::cout << count << '\n';
    }

    return 0;
}