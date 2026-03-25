

#include <iostream>

using namespace std;

int main(){

    int contador=0;
    
    for(int i = 0; i < 3; i++){
        int x;
        cin >> x;
        if(x%10==5 || x%2==0){
            contador++;
        }
    }

    cout << contador << endl;
    
    return 0;
}
