

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll esc(ll x1, ll x2, ll y1, ll y2){
    return x1*x2 + y1*y2;
}

ll vet(ll x1, ll y2, ll y1, ll x2){
    return x1*y2 - y1*x2;
}

int main(){

    ll ax, ay, bx, by; cin >> ax >> ay >> bx >> by;

    cout << esc(ax, bx, ay, by) << " ";
    cout << vet(ax, by, ay, bx) << endl;
}
