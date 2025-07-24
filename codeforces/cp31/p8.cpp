#include<iostream>

using namespace std;

int main(){
 int t;
 cin>>t;
 
 while (t--){
 
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
            
                cin>>arr[i][j];
            }
            
        }
        int minr=0,minc=0,maxr=9,maxc=9;
        int score = 0 ,count ;
        while (minr<=maxr && minc<=maxc)
        {
            count = 1;
            for (int j =minc; j <= maxc;j++){
                if (arr[minr][j] == 'X')
                {
                    score+=count;
                }
                

            }
            minr++;
            // if (minr>=maxr ||minc>=maxc)
            // {
            // break;
            // }
            for (int i = minr; i <= maxr; i++)
            {
                if (arr[i][maxc] == 'X')
                {
                    score+=count;
                }
            }
            maxc--;
            // if (minr>=maxr ||minc>=maxc)
            // {
            // break;
            // }
            if (minr<=maxr)
            {
                /* code */
                 for (int j =maxc; j >=minc ; j--)
            {
                if (arr[maxr][j] == 'X')
                {
                    score+=count;
                }
            }
              maxr--;
            }
            
           
          
            // if (minr>=maxr ||minc>=maxc)
            // {
            // break;
            // }
            if (minc<=maxc)
            {
                /* code */
                 for (int i =maxr;i >=minr ;i--)
            {
                if (arr[i][minc] == 'X')
                {
                    score+=count;
                }
            }
             minc++;
            }
            
       
           
            count++;
       
       
        }
 cout<<score<<endl;

    

 }
return 0;
}