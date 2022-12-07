#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

// define ull unsigned long long

ull num = 600851475143;

bool isPrime(ull num)
{
    if (num <= 2)
        return num == 2;
    if (num % 2 == 0)
        return false;
    ull limit = sqrt(num);
    for (ull i = 3; i <= limit; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    ull divis = sqrt(num);
    if (divis % 2 == 0)
        --divis; // ensure it's odd
    for (; divis >= 3; divis -= 2)
        if (num % divis == 0 && isPrime(divis))
            break;
    cout << divis << '\n';
}