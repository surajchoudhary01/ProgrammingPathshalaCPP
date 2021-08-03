#include<iostream>
using namespace std;

int main()
{
    int n,m,k,t;
    cin >> n >> m >> k >> t;
    if(m>0 and n>0)
    {
        int arr[n][m];
    string testcase[t];

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j] = 5;
        }
    }

    for(int i=0;i<k;i++)
    {
        int p,q;
        cin >> p >> q;
        arr[p-1][q-1] = -1;
    }
    
    
    int count = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] > 0)
            {
                arr[i][j] = count%3;
                count ++;
            }
            
        }
    }

    for(int i=0;i<t;i++)
    {
        int p,q;
        cin >> p >> q;
        p--;
        q--;
        if(arr[p][q]< 0)
        {
            
            testcase[i] = "Waste";
        }
        else if (arr[p][q]==1)
        {
            
            testcase[i] ="Carrots";
        }
          else if (arr[p][q]==2)
        {
            
            testcase[i] = "Kiwis";
        }
          else if (arr[p][q]==0)
        {
            
            testcase[i] = "Grapes";
        }
    }

    for(int i=0;i<t;i++)
    {
        cout << testcase[i]<<endl;
    }

    }
    

    
}