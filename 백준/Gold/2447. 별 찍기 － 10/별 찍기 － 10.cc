#include <iostream>

void DrawPattern(int n, int k)
{
    int poweredK = 3;
    for (int i = 0; i < k; i++)
        poweredK *= 3;

    static std::string prevPattern = "";
    std::string pattern = "";

    for (int j = 0; j < poweredK / 3; j++)
    {
        if (poweredK == 3)
        {
            pattern = "**** ****";
            break;
        }
        std::string repeat = "";

        for (int i = 0; i < poweredK / 3; i++)
        {
            repeat += prevPattern[i + j * poweredK / 3];
        }

        for (int i = 0; i < 3; i++)
        {
            pattern += repeat;
        }
    }

    for (int j = 0; j < 2; j++)
    {
        if (poweredK == 3)
            break;
        for (int i = 0; i < poweredK * poweredK/3; i++)
        {
            if (j == 0 && i % poweredK >= poweredK / 3 && i % poweredK < poweredK / 3 * 2)
            {
                pattern += ' ';
            }
            else
                pattern += pattern[i];
        }
    }

    prevPattern = pattern;

    if (n != poweredK)
    {
        DrawPattern(n, ++k);
    }
    else
    {
        for (int i = 0; i < poweredK * poweredK; i++)
        {
            std::cout << pattern[i];
            if ((i + 1) % poweredK == 0)
                std::cout << '\n';
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int k = 0;

    DrawPattern(n, k);

    return 0;
}