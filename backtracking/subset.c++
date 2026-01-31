#include<bits/stdc++.h>
using namespace std;
void f( vector<int>&v,vector<int>&ans, int idx, int n )
{
    if(idx==n)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
         cout<<endl;
    return ;
    }

    f(v,ans,idx+1,n);
    ans.push_back(v[idx]);
    f(v,ans,idx+1,n);
    ans.pop_back();

   

}


int main()
{
    vector<int>v={1,2,3,4};
    int n= v.size();
    vector<int>ans;
    f(v, ans, 0 , n);

 
  
    

   

    return 0;
}