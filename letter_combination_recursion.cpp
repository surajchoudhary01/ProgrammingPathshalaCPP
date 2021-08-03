#include<iostream>
#include<vector>
#define NULL __null
using namespace std;


void printcomb(string temp , string &digits, int i, vector<vector<char>> &digitmap)
    {
        if(digits[i] == NULL)
        {
            cout << temp << endl;
            return;
        }

        for(int j=0 ; j<digitmap[digits[i]-'2'].size(); j++)
        {
            printcomb( temp+digitmap[digits[i]-'2'][j], digits, i+1, digitmap ) ;
        }


    }


void lettercombination(string digits)
{
    vector<vector<char>> digitmap;
    digitmap.push_back({'a','b','c'});
    digitmap.push_back({'d','e','f'});
    digitmap.push_back({'g','h','i'});
    digitmap.push_back({'j','k','l'});
    digitmap.push_back({'m','n','o'});
    digitmap.push_back({'p','q','r','s'});
    digitmap.push_back({'t','u','v'});
    digitmap.push_back({'w','x','y','z'});

    if(digits.length()==0)
    {
        return;
    }
    else{
        string temp="";
        printcomb( temp , digits, 0 , digitmap ) ;
    }
    
    
}






//recurrence relation - func()

int main()
{
    string digits;
    cin >> digits;
    lettercombination(digits);


    


}