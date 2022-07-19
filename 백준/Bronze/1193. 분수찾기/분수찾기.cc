#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int level = 1;
    bool reverse = false;
    int deno = 0;
    int nume = 0;
    int count = 0;

    while (count < n)
    {
        deno = 0;
        nume = level;
        while (deno < level && !reverse)
        {
            if (count == n - 1)
                std::cout << nume << '/' << deno + 1 << ' ';
            deno++;
            nume--;
            count++;
        }
        deno = level;
        nume = 0;
        while (deno != 0 && reverse)
        {
            if (count == n - 1)
                std::cout << nume + 1 << '/' << deno << ' ';
            deno--;
            nume++;
            count++;
        }
        level++;
        reverse = !reverse;
    }

    return 0;
}