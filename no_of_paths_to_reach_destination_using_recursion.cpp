#include<iostream>
using namespace std;

//recurrence relation count(i,j) = count(i,j+1) + count(i+1,j)

int count(int x,int y, int m, int n)
{
    if(x==m-1 or y==n-1)
    {
        return 1;
    }
    
       return count(x+1,y,m,n)+count(x,y+1,m,n);
    
}


int main()
{
    int m,n;
    cin >> m >> n;
    cout << count(0,0,m,n);
}