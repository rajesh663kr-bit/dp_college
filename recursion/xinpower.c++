#include<bits/stdc++.h>
using namespace std;

 int f(int x, int n)
{ 
    if(x==0) return x;
    if(n==0) return 1;
    if(n%2==0)
    {
        return f(x,n/2)*f(x,n/2);
    } 
    else{
        return x*f(x,n/2)*f(x,n/2);
    }

    //convesional
    //  if(x==0) return x;
    // if(n==0) return 1;
    // return x*f(x,n-1);


}

int main()
{
    cout<<f(2,5);
    return 0;
}