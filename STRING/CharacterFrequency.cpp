#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    set<char>st;
    for(int i=0;i<s.length();i++){
        if(st.find(s[i])==st.end()){
            cout<<s[i]<<"-"<<mp[s[i]];
            st.insert(s[i]);
        }
    }
}