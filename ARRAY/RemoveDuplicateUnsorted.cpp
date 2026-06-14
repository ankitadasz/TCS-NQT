#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int>st;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(st.find(arr[i])==st.end()){
            st.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for(int x:ans){
        cout<<x<<" ";
    }
}