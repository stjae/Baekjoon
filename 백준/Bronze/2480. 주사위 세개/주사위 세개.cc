#include <iostream>

int main(int argc, char const *argv[])
{
    int x, y, z;
    std::cin >> x >> y >> z;

    if (x == y)
    {
        if (y == z)
        {
            std::cout << 10000 + (x * 1000) << std::endl;
        }
        else
        {
            std::cout << 1000 + (x * 100) << std::endl;
        }
    }
    else if (y == z)
    {
        std::cout << 1000 + (y * 100) << std::endl;
    }
    else if (x == z)
    {
        std::cout << 1000 + (x * 100) << std::endl;
    }
    else
    {
        if (x > y && x > z)
        {
            std::cout << x * 100 << std::endl;
        }
        else if (y > x && y > z)
        {
            std::cout << y * 100 << std::endl;
        }
        else
            std::cout << z * 100 << std::endl;
    }

    return 0;
}