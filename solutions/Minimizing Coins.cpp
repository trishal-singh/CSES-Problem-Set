#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,x;
cin>>n>>x;
int Coins[n];
for(int i=0;i<n;i++)
cin>>Coins[i];
int A[x+1];
for(int i=0;i<=x;i++)
A[i]=-1;
A[0]=0;
for(int i=1;i<=x;i++)
{
  int temp=INT_MAX;
  for(int j=0;j<n;j++)
  {
    if(i-Coins[j]>=0 && A[i-Coins[j]]>=0)
    temp= min(temp,1+A[i-Coins[j]]);
    if(temp==INT_MAX)
    A[i]=-1;
    
     else A[i]=temp;
    
  }
}
   cout<<A[x]<<endl;
}
// Time O(N*X)
// Space O(X)
