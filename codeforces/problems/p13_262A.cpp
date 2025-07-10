#include<iostream>
using namespace std;
int main(){
int v[5][5];

for (int  i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
    cin>>v[i][j];
    }
    
   
   
}
int a=-1,b=-1;
for (int  i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
   if ( v[i][j]== 1)
   {
    a=i;b=j;
    break;
   }
   
   
    }
    if (a!=-1 )
    {
        break;
    }
    
   
   
}

int count =0;
count = abs(2-a) + abs(2-b);

cout<<count<<endl;



return 0;
}