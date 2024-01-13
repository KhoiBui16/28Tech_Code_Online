#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w , h ; cin >> w >> h;
    double bmi = (double)w / pow(h/100.0 , 2);
    if(bmi < 18.5) cout << "Under weight";
    else if(bmi >= 18.5 && bmi < 25) cout << "Normal";
    else if(bmi >= 25 && bmi < 30) cout << "Over weight";
    else if(bmi >= 30 && bmi < 35) cout << "Obesity 1";
    else if(bmi >= 35 && bmi < 40) cout << "Obesity 2";
    else cout << "Extreme obesity";
}