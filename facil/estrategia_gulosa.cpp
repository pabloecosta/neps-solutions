

#include <bits/stdc++.h>
using namespace std;

int main(){
  int v; cin >> v;

  vector<int> moedas = {100, 50, 25, 10, 5, 1};

  int contador = 0;
  
  for(int i = 0; i < 6; i++){
    int q = (v-(v%moedas[i]))/moedas[i];
    contador += q;
    v -= moedas[i]*q;
  }

  cout << contador << endl;

  return 0;
}
