#include <iostream>
using namespace std;

int main(){
    int i,j;
   int n=5;
   for(int k=1;k<=n;k++){
     for(i=1;i<=n-k;i++){
    cout<<" "<<" ";
   }
 
   for(i=0;i<2*k-1;i++){
    cout<<"*"<<" ";
   }
   cout<<endl;
   }
  
}