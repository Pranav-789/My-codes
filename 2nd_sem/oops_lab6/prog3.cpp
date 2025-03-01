#include<bits/stdc++.h>
using namespace std;

bool ifvow(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		return true;
	}
	return false;
}

void substr(string& s){
	int n = s.length();
	for(int i = 0; i < n; i++){
		char ch = s[i];
		if(ifvow(ch)){
			swap(s[i], s[n-1]);
			s.pop_back();
			n--;
			swap(s[i], s[n-1]);
			i--;
		}
	}
}

int main(){	
	string s;
	cout << "Enter a string: ";
	cin >> s;
	substr(s);
	cout << "The modified string: " << s << endl;
	return 0;
}
