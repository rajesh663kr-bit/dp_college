#include<bits/stdc++.h>
using namespace std;

int fibo(int n , int a, int b)
{
  if(n==0) return n;
  int c= a+b;
  cout<<c<<endl;
  return fibo(n-1,b,c);

}

int main()
{
 int a=0;
 int b=1;
 cout<<a<<endl;
 cout<<b<<endl;
 fibo( 6,a,b);

    return 0;
}