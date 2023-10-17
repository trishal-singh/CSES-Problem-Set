#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,q;
cin>>n>>q;
// Take input array
long int A[n];
for(int i=0;i<n;i++)
cin>>A[i];
// Create prefix sum array
long int prefix[n];
prefix[0]=A[0];
for(int i=1;i<n;i++)
prefix[i]=prefix[i-1]+A[i];
// Process queries
while(q--)
{
	int a,b;
	cin>>a>>b;
	a-=1;
	b-=1;
	if(a==0)
	cout<<prefix[b]<<endl;
	else cout<<prefix[b]-prefix[a-1]<<endl;
}
return 0;
}
//Time O(n)
// Space O(n)