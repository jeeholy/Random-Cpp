#include<iostream>
using namespace std;
main()
{
	int n, i, j;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(j%2 == 1) cout << "*";
			else cout << "-";
		}
		cout << endl;
	}
}
