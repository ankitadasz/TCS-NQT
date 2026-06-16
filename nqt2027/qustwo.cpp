#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count++;
    }
    if(count<n){
        cout<<"Invalid input";
    }
    unordered_set<int>st;
    int temp[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(st.find(arr[i])==st.end()){
            cout<<arr[i]<<" ";
            st.insert(arr[i]);
            temp[k]=arr[i];
            k++;
           
        }

    }
    cout<<endl;
    for(int i=k-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
  


}