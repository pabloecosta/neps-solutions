
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ans = 0;

int main(){

    int n; cin >> n;

    vector<ll> lados(n+1);

    for(int i = 1; i <= n; i++){
        cin >> lados[i];
    }

    sort(lados.begin(), lados.end());

    for(int i = 1; i < n-1; i++){
        for(int j = i+1; j < n; j++){

            int ini = j+1, fim = n, p=j;

            while(ini <= fim){

                int meio = (ini+fim)/2;

                if(lados[i]+lados[j] <= lados[meio]){
                    fim = meio-1;
                }
                else{
                    p = meio;
                    ini = meio+1;
                }
            }

            ans += p-j;

        }
    }

    cout << ans << endl;
}
