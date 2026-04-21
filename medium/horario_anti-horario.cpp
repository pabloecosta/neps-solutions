

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll vet(x1, y2, x2, y1){
    return x1*y2 - x2*y1;
}

int main(){

    ll xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
    
    ll ABx = xb - xa; ll ABy = yb - ya; ll ACx = xc - xa; ll ACy = yc-ya;
    
    ll ans = vet(ABx, ACy, ACx, ABy);

    if(ans > 0) cout << 1 << endl;
    else cout << -1 << endl;
    
}
