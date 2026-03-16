/*
Problem: Soma das Linhas de Matriz 3x3 / Row Sums of a 3×3 Matrix
Source: https://neps.academy/br/exercise/199
Difficulty: Easy

Idea:
While reading the matrix, accumulate the sum of each row and print the results.
*/
#include <iostream>

using namespace std;

int main(){

    int M[3][3];
    int S[3]={};

    for(int i=0; i<3; i++){
        for(int x=0; x<3; x++){
            cin >> M[i][x];
            S[i] += M[i][x];
        }
    }

    for(int i=0; i<3; i++){
        cout << "Linha " << i << ": " << S[i] << endl;
    }
    return 0;
}
