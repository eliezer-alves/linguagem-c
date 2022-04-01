#include<bits/stdc++.h>
//include<conio.h>
using namespace std;


int main() {
    vector<string> nomes;
    vector<string>::iterator it;
    nomes.push_back("s");
    nomes.push_back("f");
    nomes.push_back("g");
    nomes.push_back("e");
    nomes.push_back("t");
    nomes.push_back("a");

    for (it = nomes.begin();it != nomes.end();++it) {
        cout << *it << " ";
    }
    cout << endl;
    
	sort(nomes.begin(), nomes.end());
    
    for (it = nomes.begin();it != nomes.end();++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
