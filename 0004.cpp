#include<iostream>
using namespace std;

main(){
	string s;
	cin >> s;
	
	bool capital, small;
	capital = small = false;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 97) small = true;
		else capital = true;
		if(small == true && capital == true){
			cout << "Mix";
			break;
		}	
	}
	if(capital == true && small == false)
		cout << "All Capital Letter";
	else if(capital == false && small == true)
		cout << "All Small Letter";
}
