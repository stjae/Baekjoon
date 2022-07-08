#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[9], max_value = 0, index;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (max_value < arr[i])
        {
            max_value = arr[i];
            index = i;
        }
    }

    std::cout << max_value << "\n"
              << index + 1 << std::endl;
}