#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int max=0;
    int ele;
    for(auto x:mp){
     if(x.second>max || (x.second==max && x.first<ele)){
        max=x.second;
        ele=x.first;
        
     }
        
    }
    cout<<ele<<"-"<<max;

}