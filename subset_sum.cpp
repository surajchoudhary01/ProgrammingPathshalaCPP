#include<iostream>
using namespace std;

subset_sum(int arr[], int sum, int i, int &n, int &count)
{
    if(i==n)
    {
        if(sum==0)
        {
            count++;
        }
        return;
    }
    subset_sum(arr,sum-arr[i],i+1,n,count);
    subset_sum(arr,sum,i+1,n,count);
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
    subset_sum(arr,sum,i,n,count);
    cout << count;
}