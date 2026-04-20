/*
Problem: Toupeira
Source: https://neps.academy/br/exercise/2323
Difficulty: Medium

Idea: For each walk suggestion, check whether is possible to complete this walk or not. 
*/

#include <bits/stdc++.h>
using namespace std;

vector<unordered_set<int>> sala;
int ans = 0;

bool dentro(int u, int v){

    return sala[u].count(v);

}

int main(){

    int s, t; cin >> s >> t;

    sala.resize(s+1);

    for(int i = 0; i < t; i++){

        int a, b; cin >> a >> b;

        sala[a].insert(b);
        sala[b].insert(a);

    }

    int p; cin >> p;

    for(int i = 0; i < p; i++){

        int n; cin >> n;
        vector<int> passeio(n);
        bool vai = true;

        for(int i = 0; i < n; i++){
            cin >> passeio[i];
        }

        for(int i = 0; i < n-1; i++){
            if(!dentro(passeio[i], passeio[i+1])){
                vai = false;
            }
        }

        if(vai) ans++;

    }

    cout << ans << endl;
}
