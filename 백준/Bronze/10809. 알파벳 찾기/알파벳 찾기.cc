#include <iostream>

int main(int argc, char const *argv[])
{
    char s[101], alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int pos[26];

    for (int j = 0; j < 101; j++)
        s[j] = '*';

    for (int i = 0; i < 26; i++)
        pos[i] = -1;

    std::cin >> s;

    for (int j = 0; j < 26; j++)
    {
        bool isFirst = false;
        for (int i = 0; i < 101; i++)
        {
            if (alphabet[j] == s[i] && isFirst == false)
            {
                pos[j] = i;
                isFirst = true;
            }
        }
    }

    for (int ele : pos)
        std::cout << ele << ' ';

    return 0;
}