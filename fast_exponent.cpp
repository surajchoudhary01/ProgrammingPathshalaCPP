#include<iostream>
#include<cmath>
using namespace std;

int factorization(int n,int k)
{
    if(k==0)
    {
        return 1;
    }

    if(k%2 != 0)
    {
        return pow(factorization(n,k/2),2)*n;
    }
    else
    {
        return pow(factorization(n,k/2),2);
    }
}


int main()
{
    int n , k;
    cin >> n >> k;

    cout << factorization(n,k);
}