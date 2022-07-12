#include <iostream>
#include <vector>

int num[10000], gen[10000];

void genNum()
{
    for (int i = 0; i < 10000; i++)
        num[i] = i + 1;
    for (int j = 0; j < 10000; j++)
    {
        if (num[j] < 10)
        {
            gen[j] = num[j] + num[j];
        }
        else if (num[j] >= 10 && num[j] < 100)
        {
            gen[j] = num[j] + num[j] / 10 + num[j] % 10;
        }
        else if (num[j] >= 100 && num[j] < 1000)
        {
            gen[j] = num[j] + num[j] / 100 + (num[j] % 100) / 10 + num[j] % 10;
        }
        else
        {
            gen[j] = num[j] + num[j] / 1000 + (num[j] % 1000) / 100 + (num[j] % 100) / 10 + num[j] % 10;
        }
    }
}

void isSelfNum()
{
    for (int k = 0; k < 10000; k++)
    {
        bool isSelfNum = true;
        for (int l = 0; l < 10000; l++)
        {
            if (num[k] == gen[l])
                isSelfNum = false;
        }
        if (isSelfNum)
            std::cout << num[k] << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    genNum();
    isSelfNum();
    return 0;
}