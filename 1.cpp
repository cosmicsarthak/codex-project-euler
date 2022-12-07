#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    int n;
    cin >> n;
    int sm = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sm += i;
        }
    }

    cout << sm;
}