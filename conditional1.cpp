#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout << "enter marks less than 100\n";
    cin >> marks;
    if (80 <= marks && marks <= 100)
    {
        cout << "A";
    }
    else if (60 <= marks && marks <= 79)
    {
        cout << "B";
    }
    else if (50 <= marks && marks <= 59)
    {
        cout << "c";
    }
    else if (45 <= marks && marks <= 49)
    {
        cout << "D";
    }
    else if (25 <= marks && marks <= 44)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
    return 0;
}