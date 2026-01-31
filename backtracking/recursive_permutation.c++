#include<bits/stdc++.h>

using namespace std;

void f(string s , string op , int  i, vector<string>& v)
{

    unordered_set<char>st;
    if(s.size()==0){
        v.push_back(op);
       // cout<<op;
        return ;
    }
   for(int i=0;i<s.size();i++){

    if(st.find(s[i])==st.end()){
        st.insert(s[i]);
    string newin = s.substr(0,i)+s.substr(i+1);
    string newop = op+s[i];
      f(newin , newop , i+1 , v);
    }
}

    return ;
}


void f(string str , int i)
{
    unordered_set<char>st;
    if(i==str.size()){
        cout<<str<<endl;
        return;
    }

    for(int idx = i;idx<str.length();idx++)
    {
        if(st.find(str[idx])==st.end())
        {
            st.insert(str[idx]);
            swap(str[i] , str[idx]);
            f(str , i+1);
            swap(str[i], str[idx]);
    }
    }
}

int main()
{

    string s="abac";

  vector<string>v;
   // f(s ," ",0 ,v);

   f(s , 0);
for(auto ele:v)
{
    cout<<ele<<endl;
}
   

    return 0;
}