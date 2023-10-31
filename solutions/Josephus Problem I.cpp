#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    vector<int> original;
	for(int i=1;i<=n;i++)
	original.push_back(i);

	while(original.size()>1)
	{ vector<int> temp;
		for(int i=0;i<original.size();i++)
		{
			if(i%2==1)
			cout<<original[i]<<" ";
			else temp.push_back(original[i]);
		}
		if(original.size()%2==0)
		original=temp;
		else{
			original.clear();
			original.push_back(temp.back());
			temp.pop_back();
			for(auto x:temp)
			original.push_back(x);
		}
	}
	cout<<original[0]<<" ";
	return 0;
}
// Time O(NlogN)
// Space O(N)