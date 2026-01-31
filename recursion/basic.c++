#include<bits/stdc++.h>

using namespace std;

int f(int n ,int sum)
{
    if(n==1) return n;
    sum= n+f(n-1,sum);
    return sum;

}

int main()
{
    int n=7;
    int sum=0;
    cout<<f(n ,sum);


    return 0;
}