#include<iostream>
using namespace std;

int total = 0;

void count(int i, int j, int m , int n)
    {
        if(i==m-1 or j==n-1)
        {
            total = total + 1;
            return;
        }

        count(i+1,j,m,n);
        count(i,j+1,m,n);
        


    }


int main()
{
    int m,n;
    cin >> m >> n;
    count(0,0,m,n);
    cout << total;

    
    
    
}