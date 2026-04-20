

#include <bits/stdc++.h>
using namespace std;

vector<unordered_set<int>> grafo;
vector<int> saida;


int main(){

    int n, m; cin >> n >> m;

    grafo.resize(n+1);

    for(int i = 0; i < m; i++){
        int t, a, b; cin >> t >> a >> b;

        if(t==0){
            if(grafo[a].count(b) || grafo[b].count(a)){
                saida.push_back(1);
            }
            else saida.push_back(0);
        }
        else{
            grafo[a].insert(b);
            grafo[b].insert(a);
        }
    }

    for(int i = 0; i < saida.size(); i++){
        cout << saida[i] << endl;
    }
}
