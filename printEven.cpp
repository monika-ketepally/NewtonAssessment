#include <iostream>
using namespace std;

void printEven(int i,int x){
    if(i>x){
        return;
    }
    cout<<i<<" ";
    printEven(i+2,x);
}
int main(){
  int x;
  cout<<"Enter limit : "<<endl;
  cin>>x;
  printEven(0,x);
  return 0;
}
