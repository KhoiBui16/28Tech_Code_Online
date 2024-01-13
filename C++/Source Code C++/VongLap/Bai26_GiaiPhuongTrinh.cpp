#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , n ; cin >> a >> b >> n;
	for(int y = n / b ; y >= 0 ;y--)
	{
		if((n - y*b) % a == 0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}