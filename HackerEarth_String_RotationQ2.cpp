HackerEarth Accepted solution.
Question-
You are given two strings s and t of the same length . Your task is to convert the string s into t by doing some operations. 
In an operation, you can delete the first character of the string  and append any character at the end of the string. 
You are required to determine the minimum number of operations to s convert t into .

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int n;
 
cin>>n;
 
string s,t;
 
cin>>s;
 
cin>>t;
 
int count = 0;
 
string tmp;
 
for(int i=0;i<n;i++){
 
tmp=s.substr(i);
 
if(t.find(tmp)==0){
 
cout<<count<<endl;
 
return 0;
 
}
 
count++;
 
}
 
}