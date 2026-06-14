#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string day;
    cin >> day;

    int pos;

    if(day == "mon") pos = 6;
    else if(day == "tue") pos = 5;
    else if(day == "wed") pos = 4;
    else if(day == "thu") pos = 3;
    else if(day == "fri") pos = 2;
    else if(day == "sat") pos = 1;
    else pos = 0; // sun

    int ans = 0;

    if(n >= pos + 1)
        ans = 1 + (n - pos - 1) / 7;

    cout << ans;
}