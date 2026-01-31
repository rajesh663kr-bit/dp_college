#include<bits/stdc++.h>
using namespace std;
vector<vector<char>>grid;


bool isplace(int row, int col, int n)
{
    // for row
    for(int i=row-1;i>=0;i--)
    {
        if(grid[i][col]=='q') return false;
    }

    //  for(int i=0;i<n;i++)
    // {
    //     if(grid[row][i]=='q') return false;
    // }

    
    // for  diagonals

    for(int i= row-1 , j = col-1 ; i>=0 && j>=0 ; i--, j--)
    {
        if(grid[i][j]=='q') return false;
    
    }

      for(int i= row-1 , j = col+1 ; i>=0 && j<=n ; i--, j++)
    {
        if(grid[i][j]=='q') return false;
    
    }

    return true;
}

void f(int row , int n)
{
    if(row==n)
    { // base case

        for(auto row: grid)
        {
            for(auto ele: row)
            {
                cout<<ele<<" ";
            }

            cout<<endl;
        }

        return;

        
    }

    for(int col=0;col<n;col++)
    {
        if(isplace(row, col,n ))
        {
            grid[row][col]='q';
            f(row+1,n);
            grid[row][col]='.';
        }
    }



}

void queen(int n)
{
    grid.clear();
    grid.resize(n,vector<char>(n , '.'));

    f(0,n);
    return;

}



int main()
{
  

    queen(4);

    return 0;

}