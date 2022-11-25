#include<iostream>
using namespace std;

main()
{
	int n, q, arr[2002], i;
	cin >> n >> q;
	for(i = 0; i < n; i++)	cin >> arr[i];
	int a, b, sum;
	while(q--)
	{
		cin >> a >> b;
		sum = 0;
		for(i = a-1; i< b; i++) sum += arr[i];
		cout << sum << endl;
	}
}

