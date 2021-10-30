Problem
You are given a string s consisting of lowercase English letters and/or '_' (underscore).
You have to replace all underscores (if any) with vowels present in the string.

The rule you follow is:
Each underscore can be replaced with any one of the vowel(s) that came before it.

You have to tell the total number of distinct strings we can generate following the above rule.


Solution-


#include<iostream>
#include<string>
using namespace std;

int main()
{
int t;
cin >> t;

while(t != 0)
{
    string a;
cin >> a;
int und = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == 95)
        {
            und++;
        }
    }
    
    for(int i = 0; i < a.length(); i++)
    {
        
        if( a[i]==97 || a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117  )
       {
           for(int j = i + 1; j < a.length(); j++)
            {
                if(a[i] == a[j] )
                {
                    a[j] = 'q';
                }
            }
        }
    }
    
    int vow = 0;
    for(int i = 0; i < a.length(); i++)
    {
       
        if( /*a[i] != a[j] &&*/ (a[i]==97 || a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117 ) )
       {
           vow++;
       }
    
    }
    cout << (vow * und);
    t--;
}  
    return 0;
}