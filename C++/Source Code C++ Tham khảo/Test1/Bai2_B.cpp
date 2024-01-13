#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >>n;
	int dem = 0;
	for(int i = 0 ;i < n ;i++)
	{
		char c ; cin >> c;
		switch(c)
		{
			case 'u':
			case 'e':
			case 'o':
			case 'a':
			case 'i':
			case 'U':
			case 'E':
			case 'O':
			case 'A':
			case 'I':
				++dem;
				break;
			default : break;
		}
	}
	if(dem == 0) cout << "NONE";
	else cout << dem;
}