#include<bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z,k;
	cin >> x >> y >> z;
	k = (z*60) + 30;
	cout << (k >= (x+y)*60) << endl;
	return 0;
}
