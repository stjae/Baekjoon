#include <iostream>

void func(int &i, int &n, int &sum)
{
    if (i + 1 < 100)
        sum++;

    int x = (i + 1) / 100;
    int y = ((i + 1) / 10) % 10;
    int z = (i + 1) % 10;

    if (i + 1 >= 100 && (z - y) == (y - x))
        sum++;
}

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
        func(i, n, sum);

    std::cout << sum << std::endl;

    return 0;
}