#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int D;
    cin>>D;
    int fine;
    cin>>fine;
    
    int count=0;
    
    for(int i=0;i<n;i++){
       if(D%2==0){
        if(arr[i]%2!=0){
            count++;
        }
       }
       else if(D%2!=0){
        if(arr[i]%2==0){
            count++;
        }
       }
    }
    fine=fine*count;
    cout<<fine;
}