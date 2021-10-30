#include<iostream>
#include<string>
using namespace std;

int main()
{

string a, b;
cin >> a >> b;
    
    if(a.length() != b.length())
    {
        cout << "NO";
        return 0;
    }
    int check = 0;      //  TO CHECK IF ANY LETTER OF A STRING IS GREATER THAN B STRING
    for(int i = 0; i <= a.length(); i++)
    {
        if(a[i] > b[i])
        {
            check = 1;
        }
    }
    
    if(check == 1)
    {
        cout << "NO";
    }
    else if(check == 0)
    {
        cout << "YES";
    }
    return 0;
}