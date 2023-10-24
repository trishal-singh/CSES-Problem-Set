#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int dp[n+1];
dp[0]=0;
for(int i=1;i<=n;i++)
dp[i]=INT_MAX-1;
for(int num=1;num<=n;num++)
{
   int temp=num;
   while(temp>0)
   {
      if(num-(temp%10)>=0)
      dp[num]=min(dp[num],1+dp[num-(temp%10)]);
      temp/=10;
   }
}
cout<<dp[n]<<endl;
return 0;
}
// Time O(N logN base 10)
// Space O(N)