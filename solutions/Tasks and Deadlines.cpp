#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<pair<int,int>> temp;
while(n--)
{
  int a,b;
  cin>>a>>b;
  temp.push_back({a,b});
}
sort(temp.begin(),temp.end());
long long int ans=0,time=0;
for(int i=0;i<temp.size();i++)
{
  ans+= temp[i].second-(temp[i].first+time);
  time+=temp[i].first;
}  
cout<<ans<<endl;
return 0;
}
//time O(nlogn)
// space O(1)
