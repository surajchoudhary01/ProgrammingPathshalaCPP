#include<iostream>
using namespace std;

void print_subset(int arr[], int j, int n,int size, int ans[])
{
    if(j == n)
    {
        for(int k=0;k<size;k++)
        {
            cout << ans[k];
        }
        cout << " ";
        return;
    }

        ans[size] = arr[j];
        print_subset(arr,j+1,n,size+1,ans);
        print_subset(arr,j+1,n,size,ans);
    
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

    int j=0;
    int size=0;
    int ans[n];

    print_subset(arr,j,n,size, ans);
}