/*
Problem: Insensibilidade / Insensitivity
Source: https://neps.academy/exercise/316
Difficulty: Easy
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dist(ll x1, ll x2, ll y1, ll y2){
    
    ll dx = x1 - x2;
    ll dy = y1 - y2;

    return dx*dx + dy*dy;
}

int main(){

    int n; cin >> n;

    ll d = 0;

    for(int i = 0; i < n; i++){

        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        d += dist(x1, x2, y1, y2);
        
    }

    cout << d << endl;
}
