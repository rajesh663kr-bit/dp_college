#include<bits/stdc++.h>
using namespace std;

int sum=0;
void f(int n)
{
    if(n==0) return;
    int ld=n%10;
    f(n/10);
    sum=(sum+ld);
}
int main()
{
    f(229);
    cout<<sum;

    return 0;
}