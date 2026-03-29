

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, s1="", s2="";
    cin >> s;

    set<char> v = {'a', 'e', 'i', 'o', 'u'}; 

    for(char c : s){
        if(v.count(c)) s1 += c;
    }

    for(int i = s1.size()-1; i >= 0; i--){
        s2 += s1[i];
    }

    if(s1 == s2) cout << 'S';
    else cout << 'N';
  
    return 0;
}
