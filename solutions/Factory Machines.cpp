#include<bits/stdc++.h>
using namespace std;
bool isPossible(long long int time,long long int t,long long int *A,long long int n)
{
  long long int count=0;
  for(long long int i=0;i<n;i++)
  {
  count+= (time/A[i]);
  if(count>=t)
  break;
  }
  return (count>=t);
}
int main()
{
  long long int n,t;
  cin>>n>>t;
  long long int A[n],maximum=0;
  for(long long int i=0;i<n;i++)
  {
  cin>>A[i];
  maximum=max(A[i],maximum);
  }
long long int ans=0,start=1,end=maximum*t;
while(start<=end)
{
  long long int mid=start+(end-start)/2;
  if(isPossible(mid,t,A,n))
  {
    ans=mid;
    end=mid-1;
  }
  else start=mid+1;
}
  cout<<ans<<endl;
  return 0;
  }
