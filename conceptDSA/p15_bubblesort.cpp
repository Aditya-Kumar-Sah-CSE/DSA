#include<iostream>
using namespace std;
int main()
{
  int arr[6]={5,2,6,1,7,4};
  int i,j;
  for (int i = 0; i < 6-1; i++)
  {
    // traves
for (int j = 0; j < 6-1-i; j++)
{
    if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1]=temp;
    }
}
  }
  cout <<endl;
  for (int  i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
    return 0; 
} 

