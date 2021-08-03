/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        
    }
    
    int bucket[k];
    
    for(int i=0; i<k;i++)
    {
        bucket[i] = 0;
    }
    
    for(int i=0;i<n;i++)
    {
        bucket[arr[i]%k] += 1;
        
    }
    
    int sum = 0;
    int left = 0;
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
           left = (i+j)%k;
           if(i==j==left)
           {
               sum += ((bucket[i])*(bucket[i]-1)*(bucket[i]-2))/6;
           }
           else if(i==j!=left)
           {
               sum += ( (bucket[i]*(bucket[i]-1))/2) * bucket[left];
           }
           else if (i==left!=j)
           {
               sum += ( (bucket[i]*(bucket[i]-1))/2) * bucket[j];
           }
           else if(j==left!=i)
           {
               sum += ( (bucket[j]*(bucket[j]-1))/2) * bucket[i];
           }
           else
           {
               sum += bucket[i]*bucket[j]*bucket[left];
           }
           
           
           
        }
        
    }
    
    cout << sum;
    
    
}
