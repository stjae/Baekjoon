#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::string word;
    std::vector<std::string> words;
    std::vector<int> length;
    int count = n;

    std::getline(std::cin, word);
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, word);
        words.push_back(word);
        length.push_back(word.length());
    }

    for (int i = 0; i < n; i++)
    {
        int alp[26] = {};
        char prevChar = ' ';
        bool isFirst = false;

        for (int j = 0; j < length[i]; j++)
        {
            int index = ((int)words[i][j]) - 97;
            alp[index]++;

            if (alp[index] >= 2 && words[i][j] != prevChar && !isFirst) // 중복이지만 연속되지 않았을 경우
            {
                count--;
                isFirst = true;
            }
            prevChar = words[i][j];
        }
    }

    std::cout << count;

    return 0;
}