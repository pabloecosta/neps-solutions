

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> dolls1(n);

    for(int i = 0; i < n; i++){
        cin >> dolls1[i];
    }

    vector<int> dolls2 = dolls1;
    sort(dolls2.begin(), dolls2.end());

    vector<int> s;

    for(int i = 0; i < n; i++){
        if(dolls1[i]!=dolls2[i]){
            s.push_back(dolls1[i]);
        }
    }

    sort(s.begin(), s.end());

    cout << s.size() << endl;

    for(int i = 0; i < s.size(); i++){
        cout << s[i];
        if(i!=s.size()-1) cout << " ";
    }

    return 0;
}
