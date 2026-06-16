#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            c=s[i]+2;
            cout<<c;
        }
        else{
            c=s[i]-1;
            cout<<c;
        }
    }
}