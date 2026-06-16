#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char c;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            cout<<"error";
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            c=s[i]+2;
            if(isupper(s[i])){
                if(c>'Z'){
                    c=c-26;
                }
            }
                else if(c>'z'){
                    c=c-26;
                }
            }
        
        else{
             c=s[i]-1;
            if(isupper(s[i])){
                if(c<'A'){
                    c=c+26;
                }
            }
                else if(c<'a'){
                    c=c+26;
                }
            }
        
        cout<<c;
    }
}