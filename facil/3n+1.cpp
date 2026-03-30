

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
