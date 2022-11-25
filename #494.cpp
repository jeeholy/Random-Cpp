#include<iostream>
using namespace std;

main()
{
	int n, i, j;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(j = 1; j <= n-i; j++)
			cout << "-";
		for(j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
