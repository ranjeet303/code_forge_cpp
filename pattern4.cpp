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
    for (int i = 0; i < 5; i++)
    {

        for (int j = 5; j > i; j--)
        {
            cout << ch;
        }
        cout << "\n";
    }
}