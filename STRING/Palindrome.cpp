#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string pal="";
    for(int i=s.length()-1;i>=0;i--){
        pal=pal+s[i];
    }
    if(pal==s){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}