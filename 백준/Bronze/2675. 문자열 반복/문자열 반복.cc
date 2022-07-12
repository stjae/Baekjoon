#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int t = 0;
    int length = 0;
    int repeat[8];

    std::cin >> t;
    int r[t];
    std::string s;
    std::string result[t];

    for (int j = 0; j < t; j++)
    {
        std::cin >> r[j] >> s;
        result[j] = std::string(s);

        length = result[j].length();
        const char *stoc = result[j].c_str();
        for (int k = 0; k < length; k++)
        {
            for (int l = 0; l < r[j]; l++)
                std::cout << stoc[k];
        }
        std::cout << '\n';
    }

    return 0;
}