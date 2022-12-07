#include <bits/stdc++.h>
using namespace std;

int main()
{
    int divo = 1;
    while (!(
        (divo % 11 == 0) &&
        (divo % 12 == 0) &&
        (divo % 13 == 0) & // cc
            (divo % 14 == 0) &&
        (divo % 15 == 0) &&
        (divo % 16 == 0) &&
        (divo % 17 == 0) & // cc
            (divo % 18 == 0) &&
        (divo % 19 == 0) &
            (divo % 20 == 0)))
    {
        ++divo; // cc
    }

    cout << divo << endl;
}