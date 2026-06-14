#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int actual=0;
    int real=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        actual=actual+arr[i];
    }
    cout<<real-actual;
}