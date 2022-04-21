#include<bits/stdc++.h>

using namespace std;

int main() {
	int a1 = 3, r = 2;
	long double L,i,n;
	
	while (scanf("%llf", &L)) {
		if(L == 0) break;
		n = L-2;
		i = a1 + ((n-1) * r);
		
		double x = double(i-L)/L;
		
		printf("%.6lf\n", x);
	}
	return 0;
}
