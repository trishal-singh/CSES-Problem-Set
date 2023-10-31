#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long MOD=1000000007;
	cin>>n;
	while(n--)
	{
		long long  a,b;
		cin>>a>>b;
		long long ans=1;
		while(b > 0){
        if(b&1)
        ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
	cout<<ans<<endl;
	}

	
	return 0;
}
// Time O(NlogN)
// Space O(1)