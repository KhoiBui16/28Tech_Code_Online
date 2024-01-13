#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin >> n;
    for(int i = 1 ; i <= n ;i++)
    {
		for(int j = 1 ; j <= 10 ;j++)
		{
			cout << i << " x " << j << " = " << i*j << endl;
		}
		cout <<endl;
	}
}