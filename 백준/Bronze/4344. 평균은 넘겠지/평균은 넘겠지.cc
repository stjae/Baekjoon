#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[])
{
    int c;
    std::cin >> c;

    std::string input, lines[c], token;
    int amount[c];

    std::getline(std::cin, input);
    for (int i = 0; i < c; i++)
    {
        std::getline(std::cin, input);
        lines[i] = input;
        amount[i] = std::stoi(input);
    }

    for (int j = 0; j < c; j++)
    {
        std::stringstream ss(lines[j]);
        int count = 1, result[amount[j]], sum = 0, numOfStd = 0;
        bool isFirst = true;
        float ratio = 0.0f;

        while (ss >> token)
        {
            result[0] = 0;
            if (isFirst == false)
            {
                result[count] = std::stoi(token);
                count++;
            }
            isFirst = false;
        }

        for (int k = 0; k < amount[j] + 1; k++)
            sum += result[k];

        for (int l = 0; l < amount[j] + 1; l++)
        {
            if (result[l] > sum / (float)amount[j])
                numOfStd++;
        }

        ratio = (numOfStd / (float)amount[j]) * 100;

        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << ratio << "%\n";
    }

    return 0;
}