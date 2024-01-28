#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin >> n;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ;j++)
        {
            if(j == i || j == (n -i + 1))
            {
                cout << i << " ";
            }
            else cout <<"  ";
        }
        cout << endl;
    }
}