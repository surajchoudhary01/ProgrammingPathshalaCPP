#include<iostream>
using namespace std;


void shiftright(string &s, int k, int j)
{
    char temp= s[k];
    for(int i=k;i>j;i--)
    {
        s[i] = s[i-1];
    }
    s[j] = temp;

}


void shiftleft(string &s, int k , int j)
{
    char temp= s[j];
    for(int i=j;i<k;i++)
    {
        s[i] = s[i+1];
    }
    s[k] = temp;

}

void permute(string &s, int i)
{
    if(i==s.length())
    {
        cout << s << " ";
        return;
    }

    for(int k=i; k< s.length() ;k++)
    {
        shiftright(s,k,i);
        //cout << "rightshift  " << s << endl;
        permute(s,i+1);
        shiftleft(s,k,i);
        //cout << "leftshift  " << s << endl;
    }


}



int main()
{
    string s;
    cin >> s;
    int i=0;
    permute(s,i);
}