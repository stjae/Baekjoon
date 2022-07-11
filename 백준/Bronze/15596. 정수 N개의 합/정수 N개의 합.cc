#include <vector>
long long sum(std::vector<int> &a)
{
    long long sum = 0;
    for (int ele : a)
        sum += ele;
    return sum;
}
