#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
long long int solve(int i,int j,int n, vector<vector<int>> &A,vector<vector<long long int>> &memo)
{
	// base case
	if(i>=n || j>=n )
	return 0;
	if(A[i][j]==-1)
	return 0;
	if(i==n-1 && j==n-1)
	return 1;
   //recursive case
   if(memo[i][j]!=-1)
   return memo[i][j];
   
	long long int temp= (solve(i+1,j,n,A,memo)%mod+solve(i,j+1,n,A,memo)%mod)%mod;
	memo[i][j]=temp;
	return temp;
}
int main()
{// Take input
int n;
cin>>n;
vector<vector<int>> A( n , vector<int> (n, 0)); 
vector<vector<long long int>> memo( n , vector<long long int> (n, -1)); 
char ch;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>ch;
		A[i][j]= ch=='.'?1:-1;
		
	}
	
}
cout<<solve(0,0,n,A,memo);
return 0;
}
// Time O(N^2)
// Space O(N^2) 