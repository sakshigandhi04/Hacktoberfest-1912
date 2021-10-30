#include <bits/stdc++.h>

using namespace std;

int main(){
unordered_map<string,int> mymap;
pair<string,int>p("sid",1);
mymap.insert(p);
mymap["sidd"] = 2;

cout<<mymap["sid"]<<endl;
cout<<mymap.size()<<endl;

mymap.erase("sidd");

if(mymap.count("sidd")){
    cout<<"sidd is present"<<endl;
}
else{
    cout<<" not present";
}

}