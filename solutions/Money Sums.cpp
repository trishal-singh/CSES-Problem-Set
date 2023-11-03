#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int A[n+1];
	A[0]=-1;
	for(int i=1;i<=n;i++)
	{
	cin>>A[i];
	sum+=A[i];
	}
	sort(A,A+n);
	int dp[n+1][sum+1]={0};
	dp[0][0]=1;
	for(int j=1;j<=sum;j++)
	{
		dp[0][j]=0;

	}
	// tabulate
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=sum;j++)
	{
		// case 1
		if(dp[i-1][j]==1 || j-A[i]==0)
		dp[i][j]=1;
		// case 2
		else if(j-A[i]<0)
		dp[i][j]=dp[i-1][j];
		// case 3
		else{
			dp[i][j]=dp[i-1][j-A[i]];
		}
	}
	}
	int count=0;
	for(int j=1;j<=sum;j++)
	count+=dp[n][j];
	cout<<count<<endl;

	for(int j=1;j<=sum;j++)
	{
		if(dp[n][j]==1)
		cout<<j<<" ";
	}
   return 0;
}
// Time O(N*S)
// Space O(N*S)
// S= sum of all elements in input array