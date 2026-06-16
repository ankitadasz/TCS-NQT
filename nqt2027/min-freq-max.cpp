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
    int min=INT_MAX;
    int maxele;
    int minele;
    for(auto x:mp){
        if(x.second>max){
            max=x.second;
            maxele=x.first;
        }
       
        
    } 
     for(auto x:mp){
        if(x.second<min || (x.second==min && x.first<minele)){
            min=x.second;
            minele=x.first;
        }
       
        
    } 

    cout<<"minele"<<minele<<endl;
    cout<<maxele;

}