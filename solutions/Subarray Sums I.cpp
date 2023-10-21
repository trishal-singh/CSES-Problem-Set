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
long long int start=0,end=1;
long long int sum=A[0];
while(end<=n)
{ //cout<<sum<<" ";
  if(sum==x)
  ++count;
  if(sum<=x)
  {
    
    sum+=A[end];
    ++end;
  }
  else{
    sum-=A[start];
    ++start;
  }
}
cout<<count<<endl;
return 0;
}
//time O(N)
// space O(1)
