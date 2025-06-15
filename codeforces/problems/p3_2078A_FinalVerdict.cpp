#include<iostream>
#include<vector>
using namespace std;
int ava(vector<int>& v ){
    int sum = 0;
for (int  i = 0; i < v.size(); i++)
{
    sum+=v.at(i);
}
return (sum/v.size());


}
int main(){
int t;
cin>>t;
    while(t--){
    int n,x,avg;

    cin>>n>>x;
vector<int> a;
for (int i = 0; i <a.size(); i++)
{
    int v;
    cin>>v;
    a.push_back(v);
}
for(int i=1;n%i ==0;i++){
avg = ava(a);
}



if (avg == x)
{
    cout<<"yes"<<endl;
}
else
cout<<"NO"<<endl;
    }

return 0;
}