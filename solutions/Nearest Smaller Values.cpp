#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
stack<pair<int,int>> st;
st.push({0,0});

for(int i=0;i<n;i++)
{ int temp;
cin>>temp;
    while(st.top().first>=temp)
	{
		st.pop();
	}
	cout<<st.top().second<<" ";
	st.push({temp,i+1});
}

return 0;
}
//time O(N)
// space O(N)
