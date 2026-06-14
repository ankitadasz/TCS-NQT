#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]==secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
            count=1;
        }
    }
    if(count==1){
        cout<<secondLargest;
    }
    else{
        cout<<-1;
    }
}