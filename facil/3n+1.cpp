/*
Problem: O problema 3n+1 / 3n+1 Problem
Source: https://neps.academy/br/exercise/259
Difficulty: Easy

Idea:
Given an integer n, compute how many times it is needed to
apply the Collatz Conjecture until n becomes 1.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int c =0;

    while(n!=1){
        if(n%2==0){
            n=n/2;
            c++;
        }
        else{
            n=n*3+1;
            c++;
        }
    }

    cout << c << endl;

}
