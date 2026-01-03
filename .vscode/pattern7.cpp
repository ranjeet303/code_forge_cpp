#include <bits/stdc++.h>

using namespace std;

void pattern6(int n, char ch);
int main()
{
    char ch1;
    cout << "enter the character : ";
    cin >> ch1;
    pattern6(5, ch1);

    return 0;
}
void pattern6(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}