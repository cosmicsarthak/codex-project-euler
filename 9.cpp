
#include <bits/stdc++.h>
using namespace std;
// !TODO edgeCases

void trip(unsigned long sum)
{
    unsigned long long m, n, s = sum; // !TODO
    s /= 2;
    unsigned long long sqrt_s = sqrt(s);

    for (int m = 1; m <= sqrt_s; ++m)
    {
        if (s % m == 0)
        {
            n = (s / m) - m;
            if (m > n)
            {
                cout << pow(m, 2) - pow(n, 2) << endl;
                cout << 2 * m * n << endl
                     << pow(m, 2) + pow(n, 2) << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    // vecor<unsigned ll>
    unsigned long sm[] = {12, 30, 40, 56, 70, 84, 90, 126, 132,
                          144, 176, 182, 1000};
    for (int i = 0; i < sizeof(sm) / sizeof(unsigned long); ++i)
    {
        trip(sm[i]);
    }
    return 0;
}