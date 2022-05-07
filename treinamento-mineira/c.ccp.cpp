#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,cont=0;
	cin >> n;
	string s, c;
	cin >> s;
	for(int i=0;i<n;i++) {
		string k = s[i];
		for(int j=0; j<n; j++) {
			string ptq = "E";
			if (k == ptq) {
				continue;
			}
			if (j==n-1) {
				c[cont] = k;
				cont ++;
			}
		}
	}
	
	cout << cont << endl;
	if (cont >= 3) cout << "Yes\n";
	else cout << "\n";
	
	return 0;
}
