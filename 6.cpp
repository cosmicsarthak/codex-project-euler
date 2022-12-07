#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll sum_sq = 0;
    ll sum = 0;
    ll sq_sum = 0;

    for (ll i = 1; i < 101; i++)
    {
        sum_sq += i * i;
        sum += i;
    }
    sq_sum = sum * sum;

    cout << abs(sq_sum - sum_sq);

    return 0;
}