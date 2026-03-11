/*
Problem: Soma das Colunas de Matriz 3x3 / Column sums of a 3×3 matrix
Source: https://neps.academy/br/exercise/200
Difficulty: Easy

Idea:
Read the 3×3 matrix and accumulate the sum of each column while reading the input.
Output the resulting column sums.
*/

#include <iostream>

using namespace std;

int main(){

    int M[3][3], somas[3]={};

    for(int i=0; i<3; i++){
        for(int x=0; x<3; x++){
            cin >> M[i][x];
            somas[x] += M[i][x];
        }
    }

    for(int i=0; i<3; i++){
        cout << "Coluna " << i << ": " << somas[i] << endl;
    }
}

