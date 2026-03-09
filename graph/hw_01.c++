#include<bits/stdc++.h>

using namespace std;
int conn_component=0;
void adjency_list(int s , int d , vector<vector<int>>&adj_list , bool dir )
{
    adj_list[s].push_back(d);
    if(dir)
    {
        adj_list[d].push_back(s);
    }
}

void adjency_mat(int s , int d , vector<vector<int>>&adj_mat , bool dir)
{
    adj_mat[s][d]=1;
    if(dir)
    {
        adj_mat[d][s]=1;
    }
}


void display(vector<vector<int>>&adj_list)
{
    int n= adj_list.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<adj_list[i].size();j++)
        {
            cout<<i<<" -> "<<adj_list[i][j]<<endl;
        }
    }

}

void bfs(vector<vector<int>>&adj_list , int s )
{
    int n= adj_list.size();
    vector<bool>visit(n,false);
    queue<int>q;
    q.push(s);
    visit[s]=true;
    while(!q.empty())
    {
        int f= q.front();
        cout<<f<<" "; 
        conn_component++;
        q.pop();
        int n=adj_list[f].size();
        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                if(!visit[adj_list[f][i]])
                {
                    q.push(adj_list[f][i]);
                    visit[adj_list[f][i]]=true;
                }
            }
        }
    }
}

void display_mat(vector<vector<int>>&adj_mat)
{
    int n = adj_mat.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    int n;
    cout<<"enter the no of vertices= ";
    cin>>n;
    cout<<"enter the of edges= ";
    int e;
    cin>>e;
    vector<vector<int>>adj_list(n);

    vector<vector<int>>adj_mat(n+1 , vector<int>(n+1 , 0));
    for(int i=0;i<e;i++)
    {
        cout<<"enter the source and destination = ";
        int s;
        cin>>s;
        int d;
        cin>>d;
        adjency_list(s , d,adj_list, true );
        adjency_mat(s , d, adj_mat , true);
    }
    
    cout<<"ADJENCY LIST = "<<endl;
    display(adj_list);
    cout<<"BFS is = "<<endl;
    
   bfs(adj_list , 0 );
   cout<<"  \n no of connected component are = "<<conn_component<<endl;

   display_mat(adj_mat);





    return 0;
}