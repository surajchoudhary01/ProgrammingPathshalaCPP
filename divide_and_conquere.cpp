#include<iostream>
using namespace std;

int max_element(int arr[],int start_index, int end_index)
{
    if(start_index==end_index)
    {
        return arr[start_index];
    }
    int mid = (end_index+start_index)/2;
    int a = max_element(arr,start_index,mid);
    int b= max_element(arr,mid+1,end_index);
    return max(a,b);
}

int main()
{
    int n;
    cin >> n;
    int arr[n]; 
    int start_index = 0;
    int end_index = n-1;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << max_element(arr,start_index,end_index ) ;
}