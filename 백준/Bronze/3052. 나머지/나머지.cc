#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[10], input, count = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> input;
        arr[i] = input % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] != -1 && i != j)
            {
                if (arr[i] == arr[j])
                    arr[j] = -1;
            }
        }
    }

    for (int ele : arr)
        if (ele != -1)
            count++;

    std::cout << count << std::endl;

    return 0;
}