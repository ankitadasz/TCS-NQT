#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int lead=arr[n-1];
    cout<<lead<<" ";
    for(int i=n-1;i>=0;i--){
        if(arr[i]>lead){
            cout<<arr[i]<<" ";
            lead=arr[i];
        }

    }
}