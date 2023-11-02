#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long int n,x;
cin>>n>>x;
long long int A[n];
for(int i=0;i<n;i++)
cin>>A[i];
long long int count=0;
map<long long int,int> mp;
mp[0]=1;
long long int sum=0;
for(int i=0;i<n;i++)
{
	sum+=A[i];
	if(mp.find(sum-x)!=mp.end())
	count+=mp[sum-x];
	++mp[sum];
}
cout<<count<<endl;
return 0;
}
//time O(Nlogn)
// space O(N)
