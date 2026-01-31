#include<bits/stdc++.h>
using namespace std;

int f(int i , int n)
{
    if(n==i)
    {
        return 1;
    }
    if(i>n) return 0;
    int red= f(i+1 ,n);
    int white = f(i+2,n);
    return red+white;
}

int main()
{

    int n;
    cin>>n;
    int m ;
    cin>>m;
    int ans=0;
    for(int i=n;i<=m;i++)
    {
        ans+=f(0 ,i);
    }
    cout<<ans;
    return 0;
}