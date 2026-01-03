#include <bits/stdc++.h>
using namespace std;

int digit_count(int n);
int main()
{
    cout << digit_count(6789);
}

int digit_count(int n)
{
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}