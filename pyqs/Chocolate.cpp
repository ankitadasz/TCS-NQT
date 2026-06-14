#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=0;
    int temp[n];
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}