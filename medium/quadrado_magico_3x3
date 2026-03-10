/*
Problem: Magic Square
Source: https://neps.academy/br/exercise/198
Difficulty: Medium

Idea:
In a 3x3 magic square, all rows, columns and diagonals have the same sum.
Let S be the sum of the first row.
If the matrix is a magic square, a weighted sum of the elements must satisfy:
8 * S = 3*(sum of corners) + 4*(center) + 2*(sum of edge elements)
If the equality holds, the matrix is a magic square.
*/

#include <iostream>

using namespace std;

int main(){

    int M[3][3];
    int row_sum=0, weighted_sum=0;

    for(int i=0; i<3; i++){
        for(int x=0; x<3; x++){
            cin >> M[i][x];
        }
    }

    row_sum = M[0][0]+M[0][1]+M[0][2];
    weighted_sum =
        3*(M[0][0]+M[0][2]+M[2][0]+M[2][2])+
        4*M[1][1]+
        2*(M[0][1]+M[1][0]+M[1][2]+M[2][1]);

    if((row_sum * 8)==weighted_sum){
        cout << "SIM";
    }
    else{
        cout << "NAO";
    }
}
