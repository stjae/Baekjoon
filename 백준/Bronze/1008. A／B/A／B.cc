#include <iostream>

int main()
{
    int a, b;

    std::cout.precision(10);

    std::cin >> a >> b;
    std::cout << a / (double)b << std::endl;

    return 0;
}