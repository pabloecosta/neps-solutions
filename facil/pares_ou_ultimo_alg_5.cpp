/*
Problem: Even OR end with the number 5 / Par OU ultimo algarismo igual a 5
Source: https://neps.academy/exercise/177
Difficulty: Easy

Idea:
For each number x given, check if it is even (x % 2 == 0) or ends with 5 (x % 10 == 5). 
*/

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
