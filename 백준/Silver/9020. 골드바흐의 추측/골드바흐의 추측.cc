#include <iostream>

const int MIN = 2;
const int MAX = 10000;
const int SIZE = MAX - MIN;

bool *GetPrime()
{
    static bool flag[SIZE];
    int num = MIN;
    for (int i = 0; i < SIZE; i++)
    {
        flag[i] = true;
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (flag[i])
        {
            for (int j = 2; j < num; j++)
            {
                if (j > num / 2 || j * j > MAX)
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
                        flag[j * count - MIN] = false;
                        count++;
                    }
                }
            }
            num++;
        }
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    int m;
    std::cin >> m;

    bool *primeFlag = GetPrime();

    for (int i = 0; i < m; i++)
    {
        int n;
        std::cin >> n;
        int first = 0;
        int second = 0;
        int result = 0;
        bool init = true;
        int prime = 0;
        int index = 10000;
        bool found = false;

        while (true)
        {
            init = true;

            for (int i = SIZE; i >= 0; i--)
            {
                if (primeFlag[i] && i + 2 <= n / 2 && init && i < index)
                {
                    index = i;
                    first = i + 2;
                    second = n - first;
                    init = false;
                }
            }
            if (!init)
            {
                for (int i = index; i >= 0; i--)
                {
                    if (primeFlag[i] && second == i + 2)
                    {
                        result = i + 2;
                        found = true;
                    }
                }
                if (result == 0)
                {
                    for (int i = index; i <= SIZE; i++)
                    {
                        if (primeFlag[i] && second == i + 2)
                        {
                            result = i + 2;
                            found = true;
                        }
                    }
                    if (!found)
                    {
                        index--;
                    }
                }
            }

            if (result != 0)
            {
                std::cout << n - result << ' ' << result << '\n';
                break;
            }
        }
    }

    return 0;
}