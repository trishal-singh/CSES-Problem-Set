#include<bits/stdc++.h>
using namespace std;

int main()
{// Take input
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
cin>>A[i];
sort(A,A+n);
long long int ans=1;
for(int i=0;i<n && ans>=A[i];i++)
ans+=A[i];
cout<<ans<<endl;

return 0;
}
// Time O(NlogN)
// Space O(1) 