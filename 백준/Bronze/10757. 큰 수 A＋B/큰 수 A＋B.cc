#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string a, b;
    std::cin >> a >> b;
    std::string sum = "";
    std::string c = "0";

    if (a.length() < b.length())
    {
        std::string tmp = a;
        a = b;
        b = tmp;
    }

    while (true)
    {
        int aToNum = 0;
        if (a != "")
            aToNum = (int)(a.back() - '0');
        int bToNum = 0;
        if (b.back() != '\0')
            bToNum = (int)(b.back() - '0');
        int cToNum = (int)(c.back() - '0');
        int abc = aToNum + bToNum + cToNum;
        if (abc < 10)
        {
            a.back() = (char)(abc + '0');
            sum = a.back() + sum;
            a.pop_back();
            if (a == "")
            {
                break;
            }
            b.pop_back();
            c.pop_back();
            c += '0';
        }
        else if (abc >= 10)
        {
            a.back() = (char)((abc - 10) + '0');
            sum = a.back() + sum;
            a.pop_back();
            if (a == "")
            {
                a = "1";
                break;
            }
            b.pop_back();
            if (b == "")
            {
                b += '0';
            }
            c.pop_back();
            c += '1';
        }
    }

    std::cout << a << sum;

    return 0;
}