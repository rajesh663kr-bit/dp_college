#include<bits/stdc++.h>

using namespace std;
void f(int s , int d ,vector<vector<int>>&v , bool dir )
{
    v[s].push_back(d);
    if(dir)
    {
        v[d].push_back(s);
    }
}

void display(vector<vector<int>>&v)
{
    int n= v.size();
    for(int i=0;i<n;i++)
    {
        int n1=v[i].size();
        if(n1>0)
        {
            for(int j=0;j<n1;j++)
            {
                cout<<i<<" -> "<<v[i][j]<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"enter the no of vertices= ";
    cin>>n;
    int e;
    cout<<"enter the no of edges= ";
    cin>>e;
    vector<vector<int>>v(n+1);
    for(int i=0;i<e;i++)
    {
        cout<<"enter the source and destination = ";
        int s;
        cin>>s;
        int d;
        cin>>d;
        f(s , d , v, true);
    }

    display(v);





    return 0;
}