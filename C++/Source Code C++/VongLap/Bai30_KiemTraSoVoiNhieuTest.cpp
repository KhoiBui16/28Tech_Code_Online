#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	for(int i = 1 ; i <= n ;i++)
	{
		int x ; cin >> x;
		if(x % 2 == 0) cout << "EVEN";
		else cout << "ODD";
		cout << endl;
	}
}