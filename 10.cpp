#include <bits/stdc++.h>

// int64

using namespace std;

int find_prime(long *numsptr, int maxNum)
{
    long factor = 2;
    numsptr[1] = 0;

    while ((factor * factor) < maxNum)
    {
        for (int i = 2; i < maxNum; i++)
        {
            if (numsptr[i] != 0)
            {
                if (numsptr[i] != factor && (numsptr[i] % factor) == 0)
                {
                    numsptr[i] = 0;
                }
            }
        }
        ++factor;
    }
    return maxNum;
}

int main()
{
    int count = 0;
    int64_t sm = 0; // unsigned ll
    int maxNum = 0;
    int i = 0;

    cin >> maxNum;

    long *numsptr = new long[maxNum];

    for (int i = 0; i < maxNum; i++)
    {
        numsptr[i] = i;
    }

    find_prime(numsptr, maxNum);

    for (int j = 0; j < maxNum; j++)
    {
        sm += numsptr[j];
    }

    cout << sm;

    return 0; // was error without
}