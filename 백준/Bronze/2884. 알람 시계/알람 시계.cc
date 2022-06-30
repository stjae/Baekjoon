#include <iostream>

int main(int argc, char const *argv[])
{
    int h, m;
    std::cin >> h >> m;
    if (m - 45 < 0)
    {
        (h - 1 < 0) ? h = 23 : h -= 1;
        m = 60 + (m - 45);
        std::cout << h << " " << m << std::endl;
    }
    else
    {
        m -= 45;
        std::cout << h << " " << m << std::endl;
    }
    return 0;
}