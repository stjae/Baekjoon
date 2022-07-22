#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int number = 0;
        std::cin >> number;
        for (int j = 2; j <= number; j++)
        {
            if (j < number && number % j == 0)
            {
                break;
            }
            else if (j == number)
            {
                count++;
                break;
            }
        }
    }

    std::cout << count;

    return 0;
}