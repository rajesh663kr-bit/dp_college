#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
// void Permutation(string s , string str ,int i)
// {
//     unordered_set<char>set;
//     if(str.length()==0)
//     {
//         ans.push_back(s);
//         return ;
//     }
    
//     for(int i=0;i<str.length();i++)
//     {

//         if(set.find(str[i])==set.end())
//         {
//             set.insert(str[i]);
//             string ops=s+str[i];
//             string newstr= str.substr(0,i)+str.substr(i+1);
//             Permutation(ops,newstr,i+1);
//         }

//     }

// }

void Permutation( string& str ,int i)
{
    unordered_set<char>set;
    if(i==str.length())
    {
        ans.push_back(str);
        return ;
    }
    
    for(int idx=i;idx<str.length();idx++)
    {

        if(set.find(str[idx])==set.end())
        {
            set.insert(str[idx]);
            swap(str[i],str[idx]);
            Permutation(str,i+1);
            swap(str[i],str[idx]);
        }

    }

}
int main()
{

    string str="absc";
    int n= str.length();
    Permutation(str,0);
    for(auto x:ans)
    {
        cout<<x<<endl;
    }

    return 0;
}