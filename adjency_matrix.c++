#include<bits/stdc++.h>
using namespace std;

void f(int s, int d , vector<vector<int>>&v , bool dir)
{
    v[s][d] = 1;

    if(dir)
    {
        v[d][s] = 1;
    }
}

void display(vector<vector<int>>& v)
{
    int n = v.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(v[i][j] == 1)
            {
                cout << i << " -> " << j << endl;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter number of vertices = ";
    cin>>n;

    vector<vector<int>> v(n+1 , vector<int>(n+1 , 0));

    int e;
    cout<<"Enter number of edges = ";
    cin>>e;

    for(int i=0;i<e;i++)
    {
        cout<<"Enter source and destination = ";
        int s,d;
        cin>>s>>d;

        f(s , d , v , true);
    }

    display(v);

    return 0;
}