#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    int sum=0;
    cin>>n>>r;
    while(n>0){
        int ld=n%10;
       sum=sum+ld;
       n=n/10;
    }
    int times=sum*r;
    int total=0;
    while(times>0){
        int l=times%10;
        total=total+l;
        times=times/10;
    }
    cout<<total;
}