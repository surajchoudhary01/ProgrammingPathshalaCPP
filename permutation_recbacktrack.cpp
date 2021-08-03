#include<iostream>
using namespace std;

void permute(string &s, int i)
{
    if(i==s.length())
    {
        cout << s << " ";
        return;
    }

    for(int k=i;k<s.length();k++)
    {
        swap(s[i],s[k]);
        permute(s,i+1);
        swap(s[i],s[k]);
    }
}

int main()
{
    string s;
    cin >> s;
    int i=0;
    permute(s,i);

}