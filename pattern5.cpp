#include <bits/stdc++.h>

using namespace std;

void pattern2(int n, char ch);
int main()
{
    char ch1;
    cout << "enter the character : ";
    cin >> ch1;
    pattern2(5, ch1);

    return 0;
}
void pattern2(int n, char ch)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}