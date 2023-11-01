#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	vector<pair<int,int>> arr;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		arr.push_back({temp,i+1});
	}
	sort(arr.begin(),arr.end());
	int flag=1;
	for(int i=0;i<n;i++)
	{
       int j=i+1,k=n-1;
	   while(j<k)
	   {
		   if(arr[i].first+arr[j].first+arr[k].first==x)
		   {
			   cout<<arr[i].second<<" "<<arr[j].second<<" "<<arr[k].second<<endl;
			   flag=0;
			   break;
		   }
		   else if(arr[i].first+arr[j].first+arr[k].first<x)
		   ++j;
		   else --k;
	   }
	   if(!flag)
	   break;
	}
	if(flag)
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}