#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int x; cin >> x;
    int can = x%10;
    switch(can)
    {
        case 0: cout << "CANH "; break;
        case 1: cout << "TAN "; break;
        case 2: cout << "NHAM "; break;
        case 3: cout << "QUY "; break;
        case 4: cout << "GIAP "; break;
        case 5: cout << "AT "; break;
        case 6: cout << "BINH "; break;
        case 7: cout << "DINH "; break;
        case 8: cout << "MAU "; break;
        case 9: cout << "KY "; break;
    }
    int chi = (x-1980)%12;
    switch(chi)
    {
        case 0: cout << "THAN"; break;
        case 1: cout << "DAU"; break;
        case 2: cout << "TUAT"; break;
        case 3: cout << "HOI"; break;
        case 4: cout << "TY"; break;
        case 5: cout << "SUU"; break;
        case 6: cout << "DAN"; break;
        case 7: cout << "MAO"; break;
        case 8: cout << "THIN"; break;
        case 9: cout << "TI"; break;
        case 10: cout << "NGO"; break;
        case 11: cout << "MUI"; break;
        
    }
}
