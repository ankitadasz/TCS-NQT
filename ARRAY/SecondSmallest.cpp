#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Smallest=INT_MAX;
    int SecondSmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<Smallest){
            SecondSmallest=Smallest;
            Smallest=arr[i];
        }
        else if(arr[i]<SecondSmallest && arr[i]!=Smallest){
            SecondSmallest=arr[i];
        }
    }
    cout<<SecondSmallest;

}