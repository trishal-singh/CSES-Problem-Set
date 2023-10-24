#include<bits/stdc++.h>
using namespace std;

int main()
{// Take input
int n,cost;
cin>>n>>cost;
int price[n];
for(int i=0;i<n;i++)
cin>>price[i];
int pages[n];
for(int i=0;i<n;i++)
cin>>pages[i];
// apply dp
int dp[n+1][cost+1];
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=cost;j++)
	dp[i][j]=0;
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<=cost;j++)
	{
		dp[i+1][j]=dp[i][j];
		if(j>=price[i])
		dp[i+1][j]=max(dp[i+1][j],pages[i]+dp[i][j-price[i]]);
	}
}
cout<<dp[n][cost]<<endl;

return 0;
}
// Time O(N*X)
// Space O(N*X) where X is the cost