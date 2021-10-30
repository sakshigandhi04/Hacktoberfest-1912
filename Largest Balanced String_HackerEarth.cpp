Problem
An empty sequence is balanced.

A sequence of the form (A) or [A] or {A} is balanced if A is balanced.

A sequence of the form AB is balanced if A and B both are balanced.

 

You are given a string A, consisting of '(', ')', '[', ']', '{' and '}' only. You have to find the maximum length of the balanced string after performing some valid operation(s).

Valid operations are

Remove any character from string A

Swap any two adjacent characters of string A

You can perform these valid operations in any order and any numbers of times.

 Solution-

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    
int t;
cin >> t;

while (t--)
{
    string a;
    cin >> a;
    int ar[6] = {0};        //      ar[0] = (     ar[1] = )   ar[2] = [   ar[3] = ]   ar[4] = {   ar[5] = }
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '(')
        {
            ar[0]++;
        }
        else if(a[i] == ')')
        {
            ar[1]++;
        }
        else if(a[i] == '[')
        {
            ar[2]++;
        }
        else if(a[i] == ']')
        {
            ar[3]++;
        }
        else if(a[i] == '{')
        {
            ar[4]++;
        }
        else if(a[i] == '}')
        {
            ar[5]++;
        }
    }
    
    int length = 0;
    
    if(ar[0] == ar[1])
    {
        length = length + 2*ar[0];
    }
    else if(ar[0] > ar[1])
    {
        length = length + 2*ar[1];
    }
    else if(ar[0] < ar[1])
    {
        length = length + 2*ar[0];
    }
    if(ar[2] == ar[3])
    {
        length = length + 2*ar[2];
    }
    
    else if(ar[2] > ar[3])
    {
        length = length + 2*ar[3];
    }
    else if(ar[2] < ar[3])
    {
        length = length + 2*ar[2];
    }
    if(ar[4] == ar[5])
    {
        length = length + 2*ar[4];
    }
    else if(ar[4] > ar[5])
    {
        length = length + 2*ar[5];
    }
    else if(ar[4] < ar[5])
    {
        length = length + 2*ar[4];
    }
    
    cout << length;
}
    
    
    
    
    
    
    return 0;
}