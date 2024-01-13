#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n ; cin >> n;
	int Min = (n == 0) ? 0 : 10 , Max = 0;
	for(;n != 0 ; n /= 10)
	{
		Max = max(n % 10 , 1ll*Max);
		Min = min(n % 10 , 1ll*Min);
	}
	cout << Max << " " << Min << endl;
}