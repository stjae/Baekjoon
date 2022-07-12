#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::cin >> str;
    int length = str.size();
    int count[26] = { 0 };
    int max = 0;
    int maxIndex = 0;
    bool multiple = false;

    for (int i = 0; i < length; i++)
    {
        str[i] = toupper(str[i]);
    }

    for (int i = 0; i < length; i++)
    {
        count[str[i] - 65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            maxIndex = i;
            multiple = false;
        }
        else if (max == count[i] && max != 0)
        {
            multiple = true;
        }
    }

    multiple ? std::cout << '?' : std::cout << (char)(maxIndex + 65);

    return 0;
}