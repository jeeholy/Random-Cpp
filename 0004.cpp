#include<iostream>
using namespace std;

main(){
	string s;
	cin >> s;
	bool capital = false;
	bool small = false;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 97) 
			small = true;
		else 
			capital = true;
		if(small == true && capital == true) break;	
	}
	
	if(capital && !small)
		cout << "All Capital Letter";
	else if(!capital && small)
		cout << "All Small Letter";
	else if(capital && small)
		cout << "Mix";
}
