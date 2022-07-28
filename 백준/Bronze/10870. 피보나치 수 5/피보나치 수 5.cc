#include <iostream>

int fib(int n)
{
    static int count = 0;
    static int fib1 = 0;
    static int fib2 = 1;
    static int sum = 0;

    if (count > 0)
    {
        fib1 = fib2;
        fib2 = sum;
    }

    sum = fib1 + fib2;

    count++;
    if (n == 2)
        std::cout << sum << std::endl;
    else if (n == 0)
        std::cout << fib1 << std::endl;
    else if (n == 1)
        std::cout << fib2 << std::endl;
    else
        fib(--n);

    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    fib(n);

    return 0;
}