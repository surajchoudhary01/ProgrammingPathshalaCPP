#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    int total = 0;
    
    void count(int i, int j)
    {
        if(i==m-1 or j==n-1)
        {
            total = total + 1;
            return;
        }

        count(i+1,j);
        count(i,j+1);


    }
}