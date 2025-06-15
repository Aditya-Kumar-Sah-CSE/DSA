#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
    while(t--){
    int n;

    cin>>n;
vector<int> a;
for (int i = 0; i <n; i++)
{
    int v;
    cin>>v;
    a.push_back(v);
    
}
int i=0,j=n;
while ( i < j)
{
    if((a[i] % 2 != 0) && (a[j] % 2 == 0 ) ){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    else if(a[i]%2 ==0 )
     i++;
    else if(a[j]%2 != 0 )
      j--;
}

for (int i = 0; i < n; i++)
 cout<<a[i]<<" ";

 cout<<endl;
}
return 0;
}