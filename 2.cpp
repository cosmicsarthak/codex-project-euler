#include <iostream>
using namespace std;

int fibonacci_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_numbers(n - 2) + fibonacci_numbers(n - 1);
    }
}

int main()
{
    int n = 16;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci_numbers(i) << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long

// ll sm = 0;

// ll rec(ll n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     return rec(n - 2) + rec(n - 1);
// }

// int main()
// {
//     ll n = 4e6;
//     // cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int tmp = rec(i);
//         if (tmp % 2 == 0)
//         {
//             sm += tmp;
//         }
//     }
//     ll x = rec(n);
//     cout << sm << endl;
// }