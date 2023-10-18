#include<bits/stdc++.h>
using namespace std;



int  main(){
    
    
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    int i=0,j=0;
    set<int>S;
    int ans=0;
    while(j<n)
    {
      if(S.count(A[j]))
      {   while(A[i]!=A[j])
         {
          S.erase(A[i]);
          ++i;
         }
          S.erase(A[i]);
          ++i;
      }
      S.insert(A[j]);
      ans=max(ans,j-i+1);
      ++j;
    }
    cout<<ans<<endl;
    return 0;
}
// time O(n)
// space O(n)