#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,x;
cin>>n>>x;
int Coins[n];
for(int i=0;i<n;i++)
cin>>Coins[i];
int A[x+1]={0},mod=1000000007;

A[0]=1;

for(int j=0;j<n;j++)
{
   for(int i=1;i<=x;i++)
   {
      if(i-Coins[j]>=0)
      A[i]=(A[i]%mod +A[i-Coins[j]]%mod)%mod;
   }
}
   cout<<A[x]<<endl;
}
// Time O(N*X)
// Space O(X)
