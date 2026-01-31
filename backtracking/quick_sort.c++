#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot= arr[low];
    int i= low+1;
    int j=high;

    while(i<j)
    {
        while(i<high&&arr[i]<=pivot) i++;
        while(j>low&&arr[j]>pivot) j--;
        
    if(i < j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
    }

        
        
    }

    swap(arr[low], arr[j]);
    return j;

}

 void f(vector<int>& arr ,int i ,int j )
{
    if(i >= j) return;

    int p= partition(arr, i,j);
    f(arr,i, p-1);
    f(arr, p+1,j);
    return;

}


int main()
{
vector<int>arr={1,4,2,4,6,8,5};
int n = arr.size();

f(arr , 0, n-1);
  
for(auto ele: arr)
{
    cout<<ele<<" ";
}


    return 0;
}