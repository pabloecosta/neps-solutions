/*
Problem: Lançamento de dados / Dice Throws
Source: https://neps.academy/exercise/188
Difficulty: Easy

Idea:
Count the frequency of each dice value.
Track the maximum frequency and output all values that match it.
*/

#include <iostream>

using namespace std;

int main(){

    int n, maior=0;
    cin >> n;

    int freq[12]={};

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        freq[num-1]++;
        if(freq[num-1]>maior){
            maior=freq[num-1];
        }
    }

    for(int i=0; i<12; i++){
        if(freq[i]==maior){
            cout << i+1 << " ";
        }
    }
}
