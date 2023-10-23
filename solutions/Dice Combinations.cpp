#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int A[n+1]={0};
  A[0]=1;
  for(int num=1;num<=n;num++)
  {
  int ans=0;
  for(int i=1;i<=6;i++)
  { if(num-i>=0)
  {
   ans+= A[num-i];
   ans%=1000000007;
  }
  }
  A[num]=ans;
  }
  cout<<A[n]<<endl;
  return 0;
}
// Time O(n)
// Space O(n)
