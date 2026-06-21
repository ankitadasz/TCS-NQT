#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int missing;
    int duplicate;
    int sum=0;
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==2){
            duplicate=i;
        }
        // if(mp[i]==0){
        //     missing=i;
        // }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int expected=n*(n+1)/2;
    missing=(expected-sum)+duplicate;
    cout<<duplicate<<" "<<missing;

}