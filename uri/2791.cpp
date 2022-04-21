#include<bits/stdc++.h>

using namespace std;

int main() {
	int v[4];
	
	for (int i=0;i<4;i++) {
		scanf("%d", &v[i]);
	}
	
	for (int i=0;i<4;i++) {
		if (v[i] == 1) {
			printf("%d\n", i+1);
		}
	}
	
	return 0;
}
