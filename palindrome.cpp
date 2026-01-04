#include <bits/stdc++.h>
using namespace std;

int digit_reverse(int n);
bool palindrome(int n);
int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    if (palindrome(num))
    {
        cout << "given number is a palindrome number";
    }
    else
    {
        cout << "given number is not palindrome";
    }
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
bool palindrome(int n)
{
    if (n == digit_reverse(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}