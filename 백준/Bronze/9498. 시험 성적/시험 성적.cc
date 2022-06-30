#include <iostream>

int main(int argc, char const *argv[])
{
    int a;
    std::cin >> a;
    if (a >= 90 && a <= 100)
    {
        std::cout << 'A' << std::endl;
    }
    else if (a >= 80 && a <= 89)
    {
        std::cout << 'B' << std::endl;
    }
    else if (a >= 70 && a <= 79)
    {
        std::cout << 'C' << std::endl;
    }
    else if (a >= 60 && a <= 69)
    {
        std::cout << 'D' << std::endl;
    }
    else
    {
        std::cout << 'F' << std::endl;
    }
    return 0;
}