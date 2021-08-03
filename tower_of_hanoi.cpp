#include<iostream>
using namespace std;

vector<int> tower_of_hinoi(int n,int k,int i,int from_pole , int to_pole , int aux_pole )
{
    if(n==1)
    {
        i++;
        return ;
    }
    if(k==i)
    {
        vector<int> arr;
        arr.push_back(from_pole);
        arr.push_back(to_pole);
        return arr;
    }
    tower_of_hinoi(n-1,k, i , from_pole, aux_pole , to_pole);
    i++;
    return tower_of_hinoi(n-1,k,i,aux_pole,to_pole,from_pole);

}


int main ()
{
    int n,k;
    cin >> n >> k;
    int i=0;
    tower_of_hinoi(n,k,i,1,3,2);
}