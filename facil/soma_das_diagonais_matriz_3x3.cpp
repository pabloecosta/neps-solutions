/*
Problem: Soma das Diagonais da Matriz 3x3 / Diagonals Sums of a 3x3 Matrix
Source: https://neps.academy/br/exercise/201
Difficulty: Easy

Idea:
Read the 3×3 matrix and accumulate the sums of the main and secondary diagonals.
Observe that an element belongs to the main diagonal when i = j.
Observe that an element belongs to the secondary diagonal when i + j = 2.
Output the resulting diagonal sums.
*/

#include <iostream>

using namespace std;

int main(){

    int M[3][3];
    int diagonal1=0, diagonal2=0;

    for(int i=0; i<3; i++){
        for(int y=0; y<3; y++){
            cin >> M[i][y];
            if(i==y){
                diagonal1+=M[i][y];
            }
            if((i+y)==2){
                diagonal2+=M[i][y];
            }
            }
        }

    cout << "Diagonal principal: " << diagonal1 << endl;
    cout << "Diagonal secundaria: " << diagonal2 << endl;
}
