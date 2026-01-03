#include <bits/stdc++.h>
using namespace std;

int digit_reverse(int n);
int main()
{
    cout << digit_reverse(6789);
}

int digit_reverse(int n)
{
    int count = 0;
    int reverse = 0;
    int last_digit = 0;

    while (n != 0)
    {

        last_digit = n % 10;
        n = n / 10;
        count++;

        reverse = reverse * 10 + last_digit;
    }
    return reverse;
}