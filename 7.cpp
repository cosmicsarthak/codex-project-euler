#include <iostream>

using namespace std;

int find_prime(long *numArray, int mxnums)
{
    long gp = 2;
    numArray[1] = 0;

    while ((gp * gp) < mxnums)
    {
        for (int i = 2; i < mxnums; i++)
        {
            if (numArray[i] != 0)
            {
                if (numArray[i] != gp && (numArray[i] % gp) == 0)
                {
                    numArray[i] = 0;
                }
            }
        }
        ++gp;
    }
}

int main()
{
    int x = 0;
    int nth_prime = 0;
    int mxnums = 0;

    cin >> mxnums;
    cin >> nth_prime;
    int count = 0;

    long *arrptr = new long[mxnums];

    // we fill up the array till the number we want to find the smallest positive number that is evenly divisible.
    for (int i = 0; i < mxnums; i++)
    {
        arrptr[i] = i;
    }

    // we will get prime numbers till the mxnums by calling below funtions.
    find_prime(arrptr, mxnums);

    for (int i = x; i < mxnums; i++)
    {
        if (arrptr[i] != 0)
        {
            count++;
        }
        if (count == nth_prime)
        {
            break;
        }
    }

    cout << count << "  " << arrptr[x] << endl;
}