#include<bits/stdc++.h>

using namespace std;

bool letter(char c) {
	int dec = int(c);
	if ((dec >= 65 && dec <= 90) || (dec >= 97 && dec <= 122))
		return true;
	
	return false;
}

string dance(string s) {
	bool c = true;
	for (int i=0; i<s.size(); ++i) {
		if (!letter(s[i])) continue;
		
		if (c) {
			s[i] = toupper(s[i]);
		} else {
			s[i] = tolower(s[i]);
		}
		
		c = !c;
	}
	
	return s;
}



int main() {
	string s;
	
	while(getline(cin, s)) {
		cout << dance(s) << endl;		
	}
	
	return 0;
}
