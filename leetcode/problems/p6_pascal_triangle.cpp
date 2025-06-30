#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > pascal( int n){
    vector< vector<int> > v;
    
    for (int i = 1; i <= n; i++)
    {
        /* code */
        vector<int> a(i);
        v.push_back(a);
    }
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i+1; j++)
       {
        if (j==i || j==0)
        {
            v[i][j]=1;
        }
        else
        
           
           v[i][j]=v[i-1][j]+v[i-1][j-1];
           

      
        
       }

       
       
    }
    return v;
}

int main(){

//  
vector< vector<int> > v;
v=pascal(5);
// for (int i = 0; i < v.size(); i++)
//     {
       for (int j = 0; j < 3+1; j++)
       {
        cout<<v[3][j]<<" ";
       }
    //    cout<<"\n";
    // }

}
