#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] ;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

    }
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            int ind = arr[i];
            int val = i;

            while(ind != i)
            {
                int temp = arr[ind];
                arr[ind] = -(val+1);
                val = ind;
                ind = temp;
            }
            arr[ind] = -(val+1);
        }

    }

    for(int i=0; i<n; i++)
    {
        arr[i] = (arr[i] * -1) -1;
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}