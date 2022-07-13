#include <iostream>

int main(int argc, char const *argv[])
{
    long long int a, b, c;
    std::cin >> a >> b >> c;

    (b >= c) ? std::cout << -1 : std::cout << (a / (c - b)) + 1;

    return 0;
}