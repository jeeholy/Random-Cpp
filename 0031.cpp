#include<iostream>
#include<algorithm>
using namespace std;

main(){
	int arr[3], ans = 0;
	for(int i=0; i<3; i++)
		cin >> arr[i];
	while(arr[0]!=1 || arr[1]!=1 || arr[2]!=1){
		sort(arr, arr+3, greater<int>());
		arr[0]/=2;
		ans++;
	}
	cout << ans;
}
