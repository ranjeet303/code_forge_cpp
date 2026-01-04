#include <bits/stdc++.h>
using namespace std;

int armstrong(int n);
int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    cout << armstrong(num);

    //     if ((num))
    //     {
    //         cout << "given number is a palindrome number";
    //     }
    //     else
    //     {
    //         cout << "given number is not palindrome";
    //     }
}

int armstrong(int n)
{
    int count = 0;
    int sum = 0;
    int last_digit = 0;
    int temp = n;

    while (temp != 0)
    {

        last_digit = n % 10;
        temp = temp / 10;
        count++;
    }

    while (n != 0)
    {
        last_digit = n % 10;
        n = n / 10;
        sum += (int)pow(last_digit, count);
    }

    return sum + 1;
}
