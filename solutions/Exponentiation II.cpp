#include <bits/stdc++.h>
using namespace std;
long long MOD=1000000007;
long long power(long long a,long long b,long long mod)
{
       long long ans=1;
		while(b > 0){
        if(b&1)
        ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
		}
		return ans;
}
int main() {
	int n;
	
	cin>>n;
	while(n--)
	{
		long long  a,b,c;
		cin>>a>>b>>c;
		cout<<power(a,power(b,c,MOD-1),MOD)<<endl;
		
    }
	
	

	
	return 0;
}
// Time O(NlogN)
// Space O(1)