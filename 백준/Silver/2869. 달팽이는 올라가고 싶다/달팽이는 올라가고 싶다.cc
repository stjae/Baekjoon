#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, v;
    std::cin >> a >> b >> v;
    int day = 0;
    int remain = 0;

    day = (v - a) / (a - b);
    remain = (v - a) % (a - b);

    if (remain == 0)
        day += 1;
    else
        day += 2;

    std::cout << day;

    return 0;
}