#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
while(n--)
{
  int x,count=0;
  cin>>x;
  for(int i=1;i<=sqrt(x);i++)
  {
    if(x%i==0)
    { if(i==x/i)
    ++count;
    else
     count+=2;
    }
  }
  cout<<count<<endl;
}
}
//time O(N*sqrt(x))
// space O(1)
