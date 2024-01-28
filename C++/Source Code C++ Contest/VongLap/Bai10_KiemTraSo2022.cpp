#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	for(int i = 0 ; i < n;i++)
	{
		int x ; cin >> x;
		if(x == 2022)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}