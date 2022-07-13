#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::cin >> str;
    int length = str.length();
    int time = 0;
    std::stringstream ss("ABC DEF GHI JKL MNO PQRS TUV WXYZ");
    std::string dial;
    std::string dialArray[8];
    int count = 0;

    while (ss >> dial)
    {
        dialArray[count] = dial;
        count++;
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (dialArray[j].find(str[i]) != std::string::npos)
                time += (j + 3);
        }
    }

    std::cout << time;

    return 0;
}