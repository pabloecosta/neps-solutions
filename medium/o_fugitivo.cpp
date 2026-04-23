/*
Problem: O Fugitivo
Source: https://neps.academy/br/exercise/557
Difficulty: Medium

Idea: For each step, update the position and verify if it exceeds the maximum distance.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ll n, m; cin >> n >> m;

    bool saiu = false;

    ll dist_max = m*m;
    pair<ll, ll> P;
    ll dist_atual = 0;

    for(ll i = 0; i < n; i++){

        char c; cin >> c;
        ll d; cin >> d;

        if(c=='N') P.first += d;
        else if(c=='S') P.first -= d;
        else if(c=='L') P.second += d;
        else P.second -= d;

        dist_atual = P.first*P.first + P.second*P.second;

        if(dist_atual > dist_max){
            saiu = true;
        }
    }

    if(saiu) cout << 1 << endl;
    else cout << 0 << endl;
}
