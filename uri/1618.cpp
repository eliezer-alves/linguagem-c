#include<bits/stdc++.h>

using namespace std;

int f(int v[10]) {
	int xa = v[0], xb = v[2], ya=v[1], yc = v[5], x = v[8], y = v[9];
	if (x < xa || x > xb) return 0;
	if (y < ya || y > yc) return 0;
	return 1;
}

int main() {
	int n;
	
	cin >> n;
	while (n--) {
		int v[10];
		
		for (int i=0; i<10; i++) {
			scanf("%d", &v[i]);
		}
		
		cout << f(v) << endl;
	}
	
	return 0;
}
