#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string binary="";
    while(n>0){
        binary=to_string(n%2)+binary;
        n=n/2;
    }
    cout<<binary;
}