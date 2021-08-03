#include<iostream>
#include<string>
using namespace std;


void superdigit(string str)
{
    if(str.length()==1)
    {
        cout << str;
        return;
    }
    int a=0;
    for(int j=0;j< str.length();j++)
    {
        a += (str[j]- '0');
    }
    string abc = to_string(a);
    
    superdigit(abc);
}


int main()
{
    int n,k;
    cin >> n >>k;
    string str;
    for(int i=0;i<k ;i++)
    {
        str += to_string(n);
    }
    superdigit(str);
}