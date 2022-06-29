#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;
    std::cout << a + b << "\n"
              << a - b << "\n"
              << a * b << "\n"
              << a / b << "\n"
              << a % b << std::endl;

    return 0;
}