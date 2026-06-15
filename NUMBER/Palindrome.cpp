#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int store=n;
    int pali=0;
    while(n>0){
        int ld=n%10;
        pali=pali*10+ld;
        n=n/10;
    }
    if(pali==store){
        cout<<"palindrome";
    }
    else{
       cout<<"no";
    }
}