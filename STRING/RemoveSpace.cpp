#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string r="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            r=r+s[i];
        }
    }
    cout<<r;
}
