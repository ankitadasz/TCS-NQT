#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ld;
    int product=1;
    cin>>n;
    if(n==0){
       product=0;
    }
    else{
         while(n>0){
        ld=n%10;
        product=product*ld;
        n=n/10;
    }
    }
   
    cout<<product;

   
}