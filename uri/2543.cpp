#include<bits/stdc++.h>
using namespace std;

int main() {
	int c=0, r=0, id=0;
	while (scanf("%d", &c) == 1){
	
		scanf("%d", &id);
		
		for (int i=0; i<c; i++) {
			int a=0, b=0;
			scanf("%d %d", &a, &b);
			if(a == id && b ==0)
				r++;
		}
		
		printf("%d\n", r);
		c=0, r=0, id=0;
	}
	return 0;
}
