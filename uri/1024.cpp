#include<bits/stdc++.h>

using namespace std;

bool letter(char c) {
	int dec = int(c);
	if ((dec >= 65 && dec <= 90) || (dec >= 97 && dec <= 122))
		return true;
	
	return false;
}

string f1(string s) {
	for (int i=0; i<s.size(); i++) {
		if(letter(s[i])) {
			s[i] = int(s[i])+3;
		}
	}
	
	return s;
}

string f2(string s) {
	int len = s.size()-1;
	for (int i=0;i<=(len/2);i++) {
		char c;
		c = s[i];
		s[i] = s[len-i];
		s[len-i] = c;
	}
	
	return s;
}

string f3(string s) {
	for (int i=(s.size()/2); i<s.size(); i++) {		
		s[i] = int(s[i])-1;		
	}
	
	return s;
}

int main() {
	int n;
	scanf("%d", &n);
	cin.ignore();
	while(n--) { 
		string s;
		getline(cin, s);
		cout << f3(f2(f1(s))) << endl;
	}
	return 0;
}
