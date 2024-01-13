#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ; char c ; cin >> a >> b >> c;
    switch(c)
    {
        case '/' : 
            cout << a << " / " << b << " = " << fixed << setprecision(2) << (double)a / b;
            break;
        case '*' :
            cout << a << " * " << b << " = " << a * b ;
            break;
        case '+' :
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-' : 
            cout << a << " - " << b << " = " << a - b;
            break;
        case '%' : 
            cout << a << " % " << b << " = " << a % b;
            break;
        default : break;
    }
}