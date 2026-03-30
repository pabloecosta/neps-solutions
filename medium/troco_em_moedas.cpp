/*
Problem: Troco em Moedas / Currency Change
Source: https://neps.academy/br/exercise/143
Difficulty: Medium

Idea: Compute how many coins of each type are needed to
represent the given amount using the minimum number
of coins.
*/


#include <bits/stdc++.h>
using namespace std;

int main(){

    int c, cont=0;
    cin >> c;

    vector<int> moedas = {100, 50, 25, 10, 5, 1};
    vector<int> qtd(6, 0);

    for(int i = 0; i < 6; i++){
        qtd[i] = int(c/moedas[i]);
        c %= moedas[i];
        cont += qtd[i];
    }

    cout << cont << endl;

    for(int i = 0; i < 6; i++){
        cout << qtd[i] << endl;
    }

    return 0;
}
