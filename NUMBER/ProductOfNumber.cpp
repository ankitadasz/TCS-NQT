#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    while(n>0){
        int ld=n%10;
        product=product*ld;
        n=n/10;
    }
    cout<<product;
}