#include<bits/stdc++.h>

using namespace std;

int f( string s , int op )
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            op++;
        }

        else{
            if(op>0) op--;
        }
    }

    return op;
}

int main()
{
    int n;
   //cin>>n;
    string s=")()(";
   // cin>>s;
   int ans=f(s, 0);
   cout<<ans;
    return 0;
}