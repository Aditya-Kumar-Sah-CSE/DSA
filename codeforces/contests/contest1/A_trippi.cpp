#include<iostream>
#include<sstream>
using namespace std;

int main(){
 int t;
 cin>>t;
 t++;
 while (t--){
 
    
string s,temp,res;
getline(cin,s);

stringstream ss(s);

while (ss>>temp){
    res.push_back(temp[0]);
}
cout<<res<<endl;
 }
return 0;
}