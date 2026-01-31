#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
int f(int n , int i, bool on)
{
    if(i==n) return 1;
    if(i > n) return 0;
    
    long long jump1 = f(n , i+1 , 1 );
    long long jump2 = 0;
    if(on){
        jump2 = f(n , i+2 , 0 );

    }

    return (jump1%mod + jump2%mod)%mod;
    
}

int main()
{

    int n=5;
    cout<<f(n , 0, 1  );





    return 0;
}