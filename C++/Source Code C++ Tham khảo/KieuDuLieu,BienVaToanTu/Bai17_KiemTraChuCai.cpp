#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c ; cin >> c;
    if(c >= 'A' && c <= 'Z') cout << "UPPER";
    else if(c >= 'a' && c <= 'z') cout << "LOWER";
    else if(c >= '0' && c <= '9') cout << "DIGIT";
    else cout << "SPECIAL";
}