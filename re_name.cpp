#include <bits/stdc++.h>
using namespace std;

void name_print(string name);
int main()
{
    string name;
    name_print(name);
}
void name_print(string name)
{
    int count = 0;
    if (count == 5)
    {
    }
    else
    {
        cout << name << endl;
        count++;
    }
    name_print(name);
}