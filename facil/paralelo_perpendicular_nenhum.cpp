
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll esc(ll x1, ll x2, ll y1, ll y2){
    return x1*x2 + y1*y2;
}

ll vet(ll x1, ll y2, ll x2, ll y1){
    return x1*y2 - x2*y1;
}

int main(){

    ll ax, ay, bx, by; cin >> ax >> ay >> bx >> by;

    if(esc(ax, bx, ay, by)==0) cout << -1;
    else if(vet(ax, by, bx, ay)==0) cout << 1;
    else cout << 0;
}
