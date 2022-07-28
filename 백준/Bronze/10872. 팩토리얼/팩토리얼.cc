#include <iostream>

void factorial(int n)
{
    static int result = 1;
    if (result == 1 && n == 0)
    {
        std::cout << 1 << std::endl;
        return;
    }

    result *= n;

    n--;

    if (n == 0)
    {
        std::cout << result << std::endl;
    }
    else
        factorial(n);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    factorial(n);

    return 0;
}