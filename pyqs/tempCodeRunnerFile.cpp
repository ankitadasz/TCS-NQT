#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l;
    cin >> s >> l;
    int maxa=0;
    int n=s.length();
    
    for(int i=0;i<=n-l;i++){
        int count=0;
        for(int j=i;j<i+l;j++){
            if(s[j]=='a'){
            count++;
        }
        }

        maxa=max(maxa,count);
    }
    cout<<maxa;
    
}
