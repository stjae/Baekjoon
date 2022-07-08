#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int a, b, c, mul, count = 8;
    std::cin >> a >> b >> c;

    mul = a * b * c;
    int length = std::to_string(mul).length();
    int arr[length];
    int index = length - 1;

    while (mul != 0)
    {
        arr[index] = mul % 10;
        mul /= 10;
        index--;
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (i == arr[j])
                count++;
        }
        std::cout << count << std::endl;
    }

    return 0;
}