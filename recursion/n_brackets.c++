#include<bits/stdc++.h>

using namespace std;
 vector<string>ans;

void f(string str , int n , int op, int cl)
{
   
    if(str.length()==2*n) {

    ans.push_back(str);
    return;
    }
    
    if(n>op)
    {
        f(str+'(',n,op+1, cl);
    }
     if(op>cl)
    {
        f(str+')',n,op,cl+1);
    }

   
   
}

int main()
{

    f("(",3,1,0);
    for(auto x: ans)
    {
        cout<<x<<endl;
    }
}