#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v1(5);
	for (int i=0; i<5; ++i) {
		v1[i] = i+1;
	}
	
	vector<vector<int> > v2(3,v1);
	vector<vector<int> >::iterator it;
	
	for (it = v2.begin(); it!=v2.end(); ++it){
		
		vector<int> a(*it);
		vector<int> b(a.begin(), a.end());
		vector<int> c = b;
		
		for (vector<int>::iterator it2 = c.begin(); it2!=c.end(); ++it2) {
			cout << *it2 << " ";
		}
		cout << endl;
	}
	return 0;
}
