#include<iostream>
#include<vector>
#define NULL __null
using namespace std;

//here we are using the array to save space for the temp string in each recursive call 


void printcomb(char temp[] , int i, string &digits, vector<vector<char>> &digitmap)
    {
        if(i == digits.length())
        {
            for(int k=0;k<digits.length();k++)
            {
                cout << temp[k];
            }
            cout<< " ";
            return;
        }

        for(int j=0 ; j<digitmap[digits[i]-'2'].size(); j++)
        {
            temp[i]= digitmap[digits[i]-'2'][j];
            printcomb( temp,  i+1,digits, digitmap ) ;
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
        char temp[digits.length()+1];
        printcomb( temp ,0, digits, digitmap ) ;
    }
    
    
}






//recurrence relation - func()

int main()
{
    string digits;
    cin >> digits;
    lettercombination(digits);


    


}