#include<bits/stdc++.h>

using namespace std;

int f(vector<int>& v1 ,int i, int n , vector<int>& dp  )
{
    if(i==n-1) return v1[i];
    if(i==n-2) return max(v1[i+1], v1[i]);
   
    if(dp[i]!=-1) return dp[i];
    

    return dp[i]= max(v1[i]+f(v1, i+2 , n ,dp) , 0+f(v1 , i+1 , n ,dp));




}

int main()
{
  int n;
  
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int lar=0;

  for(int i=0;i<n;i++)
  {
    if(arr[i]>lar) lar= arr[i];
  }
  
  vector<int>v1(lar+1 , 0);
  vector<int>dp(lar+1, -1);
  for(int i=0;i<n;i++)
  {
     v1[arr[i]]+=arr[i];
  }
  
  cout<<f(v1 ,0,v1.size(), dp );
  return 0;

}