#include<bits/stdc++.h>

using namespace std;

bool ehSbstr(string antigo, string novo) {
	return true;
}

int main() {
	int n;
	while(scanf("%d", &n)) {
		if(n==0) break;
		int cont = 0;
		string antigo = "";
		
		while(n--) {
			string novo;
			cin >> novo;

			if (novo.find(antigo) == string::npos) {				
				++cont;
			}
			if(antigo == "") {
				++cont;
			}
			antigo = novo;
		}
		
		cout << cont << endl;
	}
	return 0;
}
