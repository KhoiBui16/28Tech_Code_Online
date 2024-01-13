#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	double sum = 0;
	for(int i = 2 ; i <= 2*n ; i += 2)
	{
		sum += 1.0 /i;
	}
	cout << fixed << setprecision(5) << sum << endl;
}