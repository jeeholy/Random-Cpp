#include<iostream>
#include<algorithm>
using namespace std;

main(){
	int a, b;
	cin >> a >> b;
	int temp = a;
	a = (a>b)? a:b;
	b = (a>b)? b:temp;
	int ans = 1;
	for(int i=b; i>0; i--){
		if(a%i==0 && b%i==0){
			a /= i;
			b /= i;
			ans *= i;	
		}
	}
	cout << ans;
}
