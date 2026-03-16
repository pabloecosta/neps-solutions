
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
