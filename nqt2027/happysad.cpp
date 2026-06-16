#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double happy=n;
    double sad=0;
    for(int i=0;i<4;i++){
        double newhappy = 0.3*happy+.5*sad;
        double newsad = 0.7*happy+0.5*sad;
        happy=newhappy;
        sad=newsad;
    }
    cout<<"totalhappy"<<happy;
    cout<<"totalsad"<<sad;
    

}