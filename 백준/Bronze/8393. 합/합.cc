#include <iostream>

int main(int argc, char const *argv[])
{
    int n, m = 0;
    std::cin >> n;
    for (int i = 1; i < n + 1; i++)
        m += i;
    std::cout << m << std::endl;
    return 0;
}