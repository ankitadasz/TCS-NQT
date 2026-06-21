#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int m,p;
    cin>>m>>p;
    vector<int>arr;
    int num=2;
    while(arr.size()<m+p-1){
        if(isPrime(num)){
            arr.push_back(num);
        }
        num++;
    }
    long long sum=0;
    for(int i=m-1;i<m+p-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;

}