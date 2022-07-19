#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    int room = 1;
    int count = 0;
    int level = 1;

    while (true)
    {
        room += count * 6;

        if (n > room)
        {
            level++;
        }
        else if (n < room)
        {
            break;
        }
        count++;
    }

    std::cout << level;

    return 0;
}