#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int store =n;
    int count=0;
    int temp=n;
    int ld;
    int arm=0;
    while(temp>0){ 
        count++;
        temp=temp/10;
       
    }
    while(n>0){
        int ld=n%10;
        arm=arm+pow(ld,count);
        n=n/10;
        
    }
    if(store==arm){
        cout<<"armstrong";
    }
    else{
        cout<<"no";
    }

 

}