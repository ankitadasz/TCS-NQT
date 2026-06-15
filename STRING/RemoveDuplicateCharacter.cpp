#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char>mp;
   
    for(int i=0;i<s.length();i++){
       if(mp.find(s[i])==mp.end()){
        cout<<s[i];
        mp.insert(s[i]);
       }
    }

}