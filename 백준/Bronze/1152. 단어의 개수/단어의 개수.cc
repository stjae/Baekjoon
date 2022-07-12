#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::getline(std::cin, str);

    std::stringstream ss(str);
    ss.str(str);

    std::string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }
    std::cout << count;

    return 0;
}