#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<string> v={"Tetrahedron","Cube","Octahedron" ,"Dodecahedron","Icosahedron"};
int count=0;
while (n--)
{
    string s;
    cin>>s;
    if(v[0]==s) count+=4;
    else if(v[1]==s) count+=6;
    else if(v[2]==s) count+=8;
    else if(v[3]==s) count+=12;
    else
    count+=20;
}

cout<<count;

}