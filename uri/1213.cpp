#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {    
	long long int n=0, uns, l;
	
	while (scanf("%lli", &n)) {
		int cont = 1;
		uns = l = 1;
		while(uns%n != 0) {
			uns = ((uns*10)+1) % n;
			l = (l*10)+1;
			cout << uns << " " << l << endl;
			++cont;
		}
		cout << cont << endl;
	}
	return 0;
}
