/*
Problem: Fibonacci
Source: https://neps.academy/br/exercise/257
Difficulty: Easy

Idea:
Given an integer n, compute the n-th Fibonacci number.
*/

#include <iostream>

using namespace std;

int fibonacci(int n){
        int a=1, b=1, result;

        if(n<2) return 1;
        
        for(int i=1;i<n;i++){
                result = a+b;
                a = b;
                b = result;
        }
        return result;
}

int main(){

    int n;
    cin >> n;
    cout << fibonacci(n);

}
