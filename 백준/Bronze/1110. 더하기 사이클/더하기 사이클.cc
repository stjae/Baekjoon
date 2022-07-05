#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input, tens = 0, units = 0, newNum = -1, oldNum = 0, count = 0;
    scanf("%d", &input);

    while (input != newNum)
    {
        count == 0 ? oldNum = input : oldNum = newNum;

        tens = oldNum / 10;
        units = oldNum % 10;

        newNum = (units * 10) + ((tens + units) % 10);

        count++;
    }
    printf("%d", count);

    return 0;
}