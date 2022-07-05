#include <iostream>

int main(int argc, char const *argv[])
{
    int count, a, b;
    std::cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> a >> b;
        arr[i] = a + b;
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}