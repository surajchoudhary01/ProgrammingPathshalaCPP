#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subset(int arr[], int i, int &n, vector<int> &ans, int size)
{

    for(int k=0; k< size ; k++)
    {
        cout << ans[k]<<" ";
    }
    cout << endl;

    if(i==n)
    {
        return;
    }

    
    
    for(int j=i;j<n;j++)
    {
        ans[size] = arr[j];
        subset(arr,j+1,n,ans,size+1);
    }
   
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int i=0;
    vector<int> ans(n,1);
    sort(arr,arr+n);
    int size=0;
    subset(arr,i,n,ans,size);

}
    
    
    


