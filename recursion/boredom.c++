#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int f(vector<int>& v1, int i)
{
    if(i==v1.size()-1) return v1[i];
    if(i==v1.size()-2) return max(v1[i] , v1[i+1]);
    if(dp[i]!=-1) return dp[i];


    return  dp[i]=max(v1[i]+f(v1 , i+2) , f(v1, i+1));
}

int main()
{
    vector<int>v={1 ,2 ,3};

    int maxim=INT_MIN;

    for(auto ele:v)
    {
        maxim=max(maxim , ele);

    }

    vector<int>v1(maxim+1 , 0);

    for(int i=0;i<v.size();i++)
    {
        v1[v[i]]+= v[i];
    }
    dp.resize(maxim+1 , -1);

    cout<<f(v1, 0);



    return 0;
}