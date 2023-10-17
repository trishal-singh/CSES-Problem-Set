#include <bits/stdc++.h>
using namespace std;
int main()
{ long int n;
cin>>n;
int A[n];

for(int i=0;i<n;i++)
{
cin>>A[i];

}
sort(A,A+n);
long int x=A[n/2];

long int cost=0;
for(int i=0;i<n;i++)
cost+=abs(A[i]-x);
	

cout<<cost<<endl;
return 0;
}
//Time O(nlogn)
// Space O(1)