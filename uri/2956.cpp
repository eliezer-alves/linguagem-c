#include<bits/stdc++.h>

using namespace std;

int main() {
	long double a,b,x;
	scanf("%llf %llf", &a, &b);
	x = (a*b)/2;
	
	printf("Concluimos que, dado o limite da entrada, a resposta seria: y = f(x) = %.5lf.\n", double(x));
	return 0;
}
