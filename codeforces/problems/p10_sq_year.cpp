#include<iostream>
#include<vector>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
int y = stoi(s);


int a = (int)(s[0])*10 +( (int)(s[1]));
int b = (int)(s[2])*10 + ((int)(s[3]));

    cout<<a<<" "<<b<<endl;
if(((a+b)*(a+b)) == y ) {
    
}

else{
 cout<<-1<<endl;   
}

}


return 0;
}