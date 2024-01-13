#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c ; cin >> c;
    if(c == 'z' || c == 'Z')
    {
        cout << "a";
    }
    else
    {
        if(c >= 'a' && c <= 'z')
        {
            cout << (char)(c + 1);
        }
        else
        {
            cout << (char)(c + 33);
        }
    }
}