#include <bits/stdc++.h>
using namespace std;

void divisors(int n);
int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    divisors(num);
}
bool divisible(int n)
{
    int i;
    if (n % i == 0)
        return true;
    else
        false;
}
void divisors(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
