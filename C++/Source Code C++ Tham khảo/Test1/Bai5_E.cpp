#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    int a, b, c; 
    cin >> a >> b >> c;
    if(a == 0)
    {
        if(b == 0 && c == 0){
            cout << "VO SO NGHIEM\n";
        }
        else if(b == 0 && c != 0)
        {
            cout << "VO NGHIEM\n";
        }
        else
        {
            double res = (double) - c / b;
            cout << fixed << setprecision(2) << res << endl;
        }
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if(delta < 0)
        {
            cout << "VO NGHIEM\n";
        }
        else if(delta == 0)
        {
            double res =  - b / (2.0 * a);
            cout << fixed << setprecision(2) << res << endl;
        }
        else
        {
            double res1 = (- b - sqrt(delta)) / (2 * a);
            double res2 = (- b + sqrt(delta)) / (2 * a);
            cout << fixed << setprecision(2) << res1 << ' ';
            cout << fixed << setprecision(2) << res2 << endl;
        }
    }
}