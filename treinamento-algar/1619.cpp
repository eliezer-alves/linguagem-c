#include<bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	int n;
	string d1, d2, aux;
	cin >> n;
	
	
	while(n--) {
		cin >> d1;
		cin >> d2;
		if(d1>d2) {
			aux = d1;
			d1 = d2;
			d2 = aux;
		}
		
		string s;
		int v1[3], v2[3], c=0;
		for(int i=0; i<d1.size(); i++) {
			if (d1[i] == '-') {
				v1[c] = atoi(s.c_str());
				s = "";
				c++;
			} else {
				s+=d1[i];
			}
		}
		v1[c] = atoi(s.c_str());
		s = "";
		c=0;
				
		for(int i=0; i<d2.size(); i++) {
			if (d2[i] == '-') {
				v2[c] = atoi(s.c_str());
				s = "";
				c++;
			} else {
				s+=d2[i];
			}
		}
		v2[c] = atoi(s.c_str());
		s = "";
				
		int a,m,d,t;
		a = v2[0] - v1[0];
		m = v2[1] - v1[1];
		d = v2[2] - v1[2];
		
		t = a*365 + m*30 + d;
		
		cout << t << endl;
	}
	
	return 0;
}
