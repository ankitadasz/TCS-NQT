#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int internal[m][n];
    int external[m][n];
    int total;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>internal[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>external[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<internal[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<external[i][j]<<" ";
        }
        cout<<endl;
    }

int i,j;
cin>>i>>j;
total=internal[i][j]+external[i][j];
cout<<total;
}