#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,g,Vi;
	string Ri;
	map<string, int> m1;
	
	scanf("%d%d", &n, &g);
	
	
	while (n--) {		
		cin >> Ri;
		cin >> Vi;
		m1[Ri] = Vi;		
	}
	
	int x,cont=0;
	cin >> x;
	while (x--) {
		cin >> Ri;
		cont += m1[Ri];
	}
	
	cout << cont << endl;
	if (cont < g) {
		printf("My precioooous\n");
	} else {
		printf("You shall pass!\n");
	}
	
	
	return 0;
}
