#include <iostream>

int main()
{
    int x, y;
    int y_100, y_10, y_1;

    std::cin >> x;
    std::cin >> y;

    y_100 = y / 100;
    y_10 = (y % 100) / 10;
    y_1 = y - (y_100 * 100 + y_10 * 10);

    std::cout << x * y_1 << "\n"
              << x * y_10 << "\n"
              << x * y_100 << "\n"
              << x * y << std::endl;
}