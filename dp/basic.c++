#include<bits/stdc++.h>

using namespace std;

vector<int>dp;
// int fibo(int n)
// {
//     if(n==0) return dp[n]= 0;
//     if(n==1) return dp[n]= 1;
//     if(dp[n]!=-1) return dp[n];

//     return dp[n]= fibo(n-1)+fibo(n-2);
    
// }

// iterative code 

int fibo(int n)
{
   dp[0]=0;
   dp[1]=1;
   int i=2;
   while(i<=n)
   {
    dp[i]=dp[i-1]+dp[i-2];
    i++;
   }

   return dp[n];

}

int main()
{

 int n=6;
 dp.resize(n+1,-1);
 cout<<fibo(n);
 for(auto ele:dp)
 {
  cout<<ele<<" ";
 }
    return 0;
}