#include<iostream>
using namespace std;

int subset_sum(int arr[], int sum, int i, int &n)
{
    if(sum<0)
    {
        return 0;
    }
    if(sum==0)
    {
        return 1;
    }
    if(i==n)
    {
        return 0;
    }
    return subset_sum(arr,sum-arr[i],i,n) + subset_sum(arr,sum,i+1,n);
    
    
}

int main()
{
    int sum,n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    int i=0, count=0;
    int ans = subset_sum(arr,sum,i,n);
    cout << ans;
}