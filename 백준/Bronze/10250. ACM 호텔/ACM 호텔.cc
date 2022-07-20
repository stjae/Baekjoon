#include <iostream>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    int arr[t][3];
    int num = 0;
    int floor = 0;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cin >> arr[i][j];
    }

    for (int i = 0; i < t; i++)
    {
        floor = arr[i][2] % arr[i][0];
        num = arr[i][2] / arr[i][0] + 1;

        if (floor == 0)
        {
            floor = arr[i][0];
            num -= 1;
        }

        std::cout << floor;
        std::cout.width(2);
        std::cout.fill('0');
        std::cout << num << std::endl;
    }

    return 0;
}