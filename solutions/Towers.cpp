#include<bits/stdc++.h>
using namespace std;



int  main(){
    
    
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    vector<int> ans;
    ans.push_back(A[0]);
    for(int i=1;i<n;i++)
    {
      int start=0,end=ans.size()-1,temp=-1;
      while(start<=end)
      {
        int mid= start +(end-start)/2;
        if(ans[mid]>A[i])
        {
          temp=mid;
          end=mid-1;

        }
        else{
          start=mid+1;
        }
      }
      if(temp==-1)
      ans.push_back(A[i]);
      else ans[temp]=A[i];
    }
    cout<<ans.size()<<endl;
    return 0;
}
// time O(nlogn)
// space O(n)