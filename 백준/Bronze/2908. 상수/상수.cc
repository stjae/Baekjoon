#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::getline(std::cin, str);

    std::stringstream ss(str);
    std::string word;
    std::string arr[2];
    int count = 0;
    while (ss >> word)
    {
        arr[count] = word;
        count++;
    }

    for (int i = 0; i < 2; i++)
    {
        char tmp = 0;

        tmp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = tmp;
    }

    int a = std::stoi(arr[0]);
    int b = std::stoi(arr[1]);

    (a > b) ? std::cout << a : std::cout << b;

    return 0;
}