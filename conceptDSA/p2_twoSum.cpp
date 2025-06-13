#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(13);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(13);
    v.push_back(3);
    int id =-1,i;
    for ( i = 0; i < v.size(); i++)
    {
       if(v.at(i) == 13 )
       id=i;
    }
    cout<<id<<endl;
 for(i = v.size()-1;i>=0;i--){
if(v[i] == 13 ){
    cout<<i<<endl;
    break;
}
 }

}