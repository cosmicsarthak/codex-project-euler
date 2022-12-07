#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int product)
{

    if (product / 100000 < 1)
    {

        int one = product % 10;
        int two = (product % 100 - product % 10) / 10;
        int three = (product % 1000 - product % 100) / 100;
        int four = (product % 10000 - product % 1000) / 1000;
        int five = (product % 100000 - product % 10000) / 10000;

        if ((one == five) && (two == four))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {

        int one = product % 10;
        int two = (product % 100 - product % 10) / 10;
        int three = (product % 1000 - product % 100) / 100;
        int four = (product % 10000 - product % 1000) / 1000;
        int five = (product % 100000 - product % 10000) / 10000;
        int six = (product % 1000000 - product % 100000) / 100000;

        if ((one == six) && (two == five) && (three == four))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    vector<int> pal;

    for (int i = 100; i < 999; i++)
    {
        for (int j = 100; j < 999; j++)
        {

            int product = i * j;
            if (isPalindrome(product))
            {
                pal.push_back(product);
            }
        }
    }

    /* Finding the largest number */

    int mx = pal[0];
    for (int i = 0; i < pal.size(); i++)
    {
        if (mx < pal[i])
        {
            mx = pal[i];
        }
    }

    cout << mx << '\n';

    return 0;
}