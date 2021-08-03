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
    cin >> n;
    
    int prime[n+1];
    int spf[n+1];
    for(int i = 0; i<n+1;i++)
    {
        prime[i] = 1;
        spf[i] = -1;
    }
    
    prime[1] = 0;
    for (int i = 2; i*i <= n ; i++)
    {
        if (prime[i] == 1)
        {
            for(int j=i;i*j<=n;j++)
            {
                if(prime[i*j] == 1)
                {
                    spf[i*j] = i;
                    prime[i*j] = 0;
                }
            }
        }
    }
    int k = n;
    while(spf[k] != -1)
    {
        cout << spf[k] <<" ";
        k = k/spf[k];
    }
    if(k != 1)
    {
       cout << k; 
    }
    
    
    
    
    
}
