#include <iostream>

int main()
{
    int x, y, z;

    std::cin >> x >> y >> z;
    std::cout << (x + y) % z << "\n"
              << ((x % z) + (y % z)) % z << "\n"
              << (x * y) % z << "\n"
              << ((x % z) * (y % z)) % z << std::endl;

    return 0;
}