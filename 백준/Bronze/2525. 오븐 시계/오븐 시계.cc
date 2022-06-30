#include <iostream>

int main(int argc, char const *argv[])
{
    int h, m, timer, m2h;
    std::cin >> h >> m;
    std::cin >> timer;

    if (m + timer >= 60)
    {
        m2h = (m + timer) / 60;
        (h + m2h) >= 24 ? h = (h + m2h) % 24 : h += m2h;
        std::cout << h << " " << (m + timer) % 60 << std::endl;
    }
    else
    {
        std::cout << h << " " << m + timer << std::endl;
    }

    return 0;
}