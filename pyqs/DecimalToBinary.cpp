#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int mask=0;
    while(temp>0){
        mask=mask*2+1;
        temp=temp/2;
    }
    cout<<(n^mask);
}