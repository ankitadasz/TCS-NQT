#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m],brr[n];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(brr,brr+n,greater<int>());
     for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

   int s=m+n;
   int temp[s];
   for(int i=0;i<m;i++){
    temp[i]=arr[i];
   }
   for(int i=0;i<n;i++){
    temp[m+i]=brr[i];
   }
   cout<<endl;
   sort(temp,temp+s);
   for(int i=0;i<s;i++){
    cout<<temp[i]<<" ";
   }
}