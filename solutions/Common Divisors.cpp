#include <bits/stdc++.h>
using namespace std;

const int MAX_VAL = 1e6;


vector<int> occ_num(MAX_VAL + 1);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		occ_num[x]++;
	}

	for (int gcd = MAX_VAL; gcd > 0; gcd--) {
		
		int div = 0;
		for (int j = gcd; j <= MAX_VAL; j += gcd) { div += occ_num[j]; }
		if (div >= 2) {
			cout << gcd << endl;
			break;
		}
	}
}
// reference usaco