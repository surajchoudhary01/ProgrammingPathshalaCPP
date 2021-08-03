#include<iostream>
#include<vector>
using namespace std;

void counter(int a, int &n, int &arr[], int j)
{
    if(a<=n)
    {
        arr[j] = a;
    }
    if(a>n)
    {
        cout <<  "No";
        return;
    }
    else if(a==n)
    {
        cout << "Yes"<<endl;
        cout << j << endl;
        for(int i=0;i<sizeof(arr);i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }
    counter(a*2,n,arr,j++);
    counter(a*10+1,n,arr,j++);
}


int main()
{
    int a,n,j=0;
    int arr[100];
    cin >> a >> n;
    counter(a,n,arr,j);
}