#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long int A[n];
for(int i=0;i<n;i++)
cin>>A[i];
sort(A,A+n);

long long int sum=0;
for(int i=0;i<n-1;i++)
sum+=A[i];
if(sum<=A[n-1])
cout<<2*A[n-1]<<endl;
else cout<<sum+A[n-1]<<endl;
return 0;
}
//time O(nlogn)
// space O(1)
