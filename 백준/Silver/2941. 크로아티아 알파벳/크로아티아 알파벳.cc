#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::cin >> str;
    int length = str.length();
    std::string s;
    std::string croa[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    int count = 0;
    int cLength = 0;

    for (int i = 0; i < length; i++)
    {
        s += str[i];
        for (int j = 0; j < 8; j++)
        {
            cLength = croa[j].length();
            size_t cIndex = s.find(croa[j]);
            if (cIndex != std::string::npos) // 포함할 때
            {
                s.erase(cIndex, cLength);
                s += ' ';
                count++;
            }
        }
    }
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    std::cout << s.length() + count;

    return 0;
}