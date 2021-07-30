#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter number of rows/columns in matrix:"<<endl;
  cin>>n;
  int matrix[n][n];
  
  for(int i=0;i<n;i++){
      cout<<"Enter elements in "<<i<<" row:"<<endl;
      for(int j=0;j<n;j++){
          cin>>matrix[i][j];
      }
  }
  
  int primary_diagnol_sum = 0;
    for(int i=0;i<n;i++){
        primary_diagnol_sum+=matrix[i][i];
    }
    cout<<"Sum of primary diagnol is : "<<primary_diagnol_sum<<endl;

    int secondary_diagnol_sum = 0;
    for(int i=0;i<n;i++){
        secondary_diagnol_sum+=matrix[i][n-i-1];
    }
    cout<<"Sum of secondary diagnol is : "<<secondary_diagnol_sum<<endl;
    
    cout<<"Sum of both diagnols is : "<<primary_diagnol_sum+secondary_diagnol_sum<<endl;
  return 0;
}
