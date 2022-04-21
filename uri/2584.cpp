#include<bits/stdc++.h>

using namespace std;


double f(int tamanhoAresta) {
	long double
		alfaTrianguloInterno 	= 36,
		tgAlfa 			 		= 0.7265425280053609,
		CO						= double(tamanhoAresta)/2,
		alturaTrianguloInterno	= CO/tgAlfa,
		areaTrianguloInterno	= (tamanhoAresta*alturaTrianguloInterno)/2,
		areaPoligono			= areaTrianguloInterno * 5;
	
	return areaPoligono;
}

int main() {
	int n,l;
	cin >> n;
	
	
	while(n--) {
		cin >> l;
		
		printf("%.3lf\n", f(l));
	}
	
	return 0;
}
